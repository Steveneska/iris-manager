// Defines for PS3 firmware version 4.53 DEX
#define strncmp 0x5103C // Done
#define strcpy  0x50FE8 // Done
#define strlen  0x51010 // Done
#define alloc   0x66948 // Done
#define free    0x66D84 // Done

#define memory_patch_func      0x2B83E8 // Done
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x81128 // Done
#define memset 0x50E3C // Done

#define perm_patch_func  0x3560
#define perm_var_offset -0x7FF8

#define BASE   0x3D90
#define BASE2 (0x3D90+0x400) // Syscall 838
