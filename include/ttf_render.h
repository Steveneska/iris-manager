#ifndef TTF_RENDER_H
#define TTF_RENDER_H

#include <tiny3d.h>
#include "libfont2.h"

int TTFLoadFont(int set, char * path, void * from_memory, int size_from_memory);
void TTFUnloadFont();

void TTF_to_Bitmap(u8 chr, u8 * bitmap, short *w, short *h, short *y_correction);

int Render_String_UTF8(u16 * bitmap, int w, int h, u8 *string, int sw, int sh);

// Initialize and create textures slots for TTF
u16 * init_ttf_table(u16 *texture);

// Do one time per frame character use flag reset
void reset_ttf_frame(void);

// Define window mode and size
#define WIN_AUTO_LF 1
#define WIN_SKIP_LF 2
#define WIN_DOUBLE_LF 4

void set_ttf_window(int x, int y, int width, int height, u32 mode);

extern float Y_ttf;
extern float Z_ttf;

// Display UTF8 string int posx/posy positions. Color 0 doesn't display and refresh/calculate the width.
// Color is the character color and sw/sh the width/height of the characters
int display_ttf_string(int posx, int posy, char *string, u32 color, u32 bkcolor, int sw, int sh);

#endif
