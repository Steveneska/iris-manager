// Defines for PS3 firmware version 4.80 DEX
#define strncmp 0x51210
#define strcpy  0x511BC
#define strlen  0x511E4
#define alloc   0x681F0
#define free    0x6862C

#define memory_patch_func      0x2B25EC
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x82A04
#define memset 0x51010

#define perm_patch_func  0x3560
#define perm_var_offset -0x7FF8

#define BASE   0x3D90
#define BASE2 (0x3D90+0x400) // Syscall 838
