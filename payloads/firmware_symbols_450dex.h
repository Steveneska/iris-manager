// Defines for PS3 firmware version 4.50 DEX
#define strncmp 0x51038
#define strcpy  0x50FE4
#define strlen  0x5100C
#define alloc   0x66944
#define free    0x66D80

#define memory_patch_func      0x2B8210
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x81124
#define memset 0x50E38

#define perm_patch_func  0x3560
#define perm_var_offset -0x7FF8

#define BASE   0x3D90
#define BASE2 (0x3D90+0x400) // Syscall 838
