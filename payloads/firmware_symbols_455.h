// Defines for PS3 firmware version 4.55
#define strncmp 0x4D8D8 // Done
#define strcpy  0x4D884 // Done
#define strlen  0x4D8AC // Done
#define alloc   0x643B4 // Done
#define free    0x647F0 // Done

#define memory_patch_func      0x29F770 // Done
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x7E488 // Done
#define memset 0x4D6D8 // Done

#define perm_patch_func  0x3560
#define perm_var_offset -0x7FF8

#define BASE   0x3D90
#define BASE2 (0x3D90+0x400) // Syscall 838
