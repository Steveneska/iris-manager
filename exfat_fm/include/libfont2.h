/*
 * Tiny3D - Font Library
 *
 * Copyright (c) 2010 Hermes <www.elotrolado.net>
 */

#ifndef LIBFONT2_H
#define LIBFONT2_H

#include <tiny3d.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * NOTE:
 * LIBFONT is thinking to work with Tiny3D 2D mode. You need to call tiny3d_Project2D()
 * before to work with draw functions
 */

// Initialize all data. After you call it you don't have any font to use
void ResetFont();

// Used as byte_order in AddFontFromBitmapArray()
#define BIT0_FIRST_PIXEL 0
#define BIT7_FIRST_PIXEL 1

/*
 * Add one font from one bitmap array. You can define the font range with first_char and last_char (in my sample I use
 * two fonts that starts at chr 32 and finish at chr 255 and other font starts at 0 and finish at 254.
 *
 * Fonts can have one depth of 1, 2, 4, 8 bits (used as pixel intensity) to create smooth fonts and you can select the
 * byte order (some fonts can use bit 7 as first pixel or bit 0)
 *
 * w and h must be 8, 16, 32, etc...
 *
 * It receive one RSX texture pointer and return the texture pointer increased and aligned to 16 bytes think to use this
 * pointer to build the next RSX texture
 */
u8 * AddFontFromBitmapArray(u8 *font, u8 *texture, u8 first_char, u8 last_char, int w, int h, int bits_per_pixel, int byte_order);

/*
 * Add one bitmap font creating it from True Type Fonts. You can define the font range with first_char and last_char in
 * the range 0 to 255
 *
 * w and h must be 8, 16, 32, etc...
 *
 * The callback is used to create the font externally (it don't need to use freetype library directly)
 *
 * It receive one RSX texture pointer and return the texture pointer increased and aligned to 16 bytes think to use this
 * pointer to build the next RSX texture
*/
u8 * AddFontFromTTF(u8 *texture, u8 first_char, u8 last_char, int w, int h,
	void (* ttf_callback) (u8 chr, u8 * bitmap, short *w, short *h, short *y_correction));

/*
 * SetFontTextureMethod enables/disables multi texture merge with font color.
 * It needs an external texture loaded in unit 1 (tiny3d_SetTextureWrap(1, ...))
 * and tiny3d_SelMultiTexturesMethod() enabled
 */
#define FONT_SINGLE_TEXTURE		0 // Default method
#define FONT_DOUBLE_TEXTURE		1 // Enable and maps external second texture char by char
#define FONT_DOUBLE_TEXTURE2	2 // Enable and maps external second texture using the screen coordinates rectangle
#define FONT_DOUBLE_TEXTUREMOD	3 // Enable and maps external second texture using the module of coordinates rectangle (fixed with SetDoubleTextureModule())

void SetFontTextureMethod(int method);

// Used with FONT_DOUBLE_TEXTUREMOD for double texture method: second texture coordinates is calculated using (virtual_screen % mod)/mod relation
void SetDoubleTextureModule(int module_x, int module_y);

// Function to select the current font to use (the first is 0. if you select an undefined font, it uses font 0)
void SetCurrentFont(int nfont);

// Font are resizable: the minimum is 8 x 8 but you can use as you want. Remember the font quality depends of the original size
void SetFontSize(int sx, int sy);

// Select the color and the background color for the font. if you use 0 for bkcolor background is not drawing
void SetFontColor(u32 color, u32 bkcolor);

// Enable/disable the auto center feature. Don't use '\n' or unsupported characters here
void SetFontAutoCenter(int on_off);

// Compatibility with old name
#define SetFontAutocenter SetFontAutoCenter

// Enable the auto new line if width is different to 0. When one word exceed the width specified, it skip to the next line
void SetFontAutoNewLine(int width);

// Z used to draw the font. Usually is 0.0f
void SetFontZ(float z);

// Last X used
float GetFontX();

// Last Y used
float GetFontY();

// Change the screen width/height limits (usually 848 x 512.0. It is used only for center function and one of multi texture modes)
void SetFontScreenLimits(float width, float height);

// Last Height used
float GetFontHeight();

// Last Width used
float GetFontWidth();

// Get Width of a string
float WidthFromStr(char* str);

// Function to draw one character
void DrawChar(float x, float y, float z, u8 chr);

// Function to draw one string. It return X incremented
float DrawString(float x, float y, char *str);

// Function to draw with format string similar to printf. It return X incremented
float DrawFormatString(float x, float y, char *format, ...);

#ifdef __cplusplus
}
#endif

#endif
