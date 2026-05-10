// Defines for PS3 firmware version 4.70
#define strncmp 0x4D868
#define strcpy  0x4D814
#define strlen  0x4D83C
#define alloc   0x64820
#define free    0x64C5C

#define memory_patch_func      0x2975E8
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x7E928
#define memset 0x4D668

#define perm_patch_func  0x3560
#define perm_var_offset -0x7FF8

#define BASE   0x3D90
#define BASE2 (0x3D90+0x400) // Syscall 838
