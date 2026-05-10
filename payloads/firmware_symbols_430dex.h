// Defines for PS3 firmware version 4.30 DEX
#define strncmp 0x52034
#define strcpy  0x51FE0
#define strlen  0x52008
#define alloc   0x67940
#define free    0x67D7C

#define memory_patch_func      0x2DAE74
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x82120
#define memset 0x51E34

#define perm_patch_func  0x3560
#define perm_var_offset -0x7FF8

#define BASE   0x3d90
#define BASE2 (0x3d90+0x400) // Syscall 838
