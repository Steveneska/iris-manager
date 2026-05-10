// Defines for PS3 firmware version 4.65D EX
#define strncmp 0x51214
#define strcpy  0x511C0
#define strlen  0x511E8
#define alloc   0x6816C
#define free    0x685A8

#define memory_patch_func      0x2BB038
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x82980
#define memset 0x51014

#define perm_patch_func  0x3560
#define perm_var_offset -0x7FF8

#define BASE   0x3D90
#define BASE2 (0x3D90+0x400) // Syscall 838
