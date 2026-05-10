// Defines for PS3 firmware version 4.50
#define strncmp 0x4D690 // Done
#define strcpy  0x4D63C // Done
#define strlen  0x4D664 // Done
#define alloc   0x62F74 // Done
#define free    0x633B0 // Done

#define memory_patch_func      0x29DD48 // Done
#define open_mapping_table_ext 0x7FFF00

// Common Symbols PL3
#define memcpy 0x7D048 // Done
#define memset 0x4D490 // Done

#define perm_patch_func  0x3560
#define perm_var_offset -0x7FF8

#define BASE   0x3D90
#define BASE2 (0x3D90+0x400)
