// Defines for PS3 firmware version 4.31 CEX
#define strncmp 0x4E748
#define strcpy  0x4E6F4
#define strlen  0x4E71C
#define alloc   0x6402C
#define free    0x64468

#define memory_patch_func      0x2C3D08
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x7E100
#define memset 0x4E548

#define perm_patch_func  0x3560
#define perm_var_offset -0x7FF8

#define BASE   0x3d90
#define BASE2 (0x3d90+0x400) // Syscall 838
