// Defines for PS3 firmware version 4.46
#define strncmp 0x4D694 // Done
#define strcpy  0x4D640 // Done
#define strlen  0x4D668 // Done
#define alloc   0x62F78 // Done
#define free    0x633B4 // Done

#define memory_patch_func      0x2C47D8 // Done
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x7D04C // Done
#define memset 0x4D494 // Done

#define perm_patch_func  0x3560
#define perm_var_offset -0x7FF8

#define BASE   0x3D90
#define BASE2 (0x3D90+0x400) // Syscall 838
