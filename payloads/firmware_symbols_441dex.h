// Defines for PS3 firmware version 4.41DEX
#define strncmp 0x50F84
#define strcpy  0x50F30
#define strlen  0x50F58
#define alloc   0x66890
#define free    0x66CCC

#define memory_patch_func      0x2DB764
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x81070
#define memset 0x50D84

#define perm_patch_func  0x3560
#define perm_var_offset -0x7FF8

#define BASE   0x3D90
#define BASE2 (0x3D90+0x400) // Syscall 838
