// Defines for PS3 firmware version 4.21 DEX
#define strncmp 0x51FF8 // Done
#define strcpy  0x51FA4 // Done
#define strlen  0x51FCC // Done
#define alloc   0x677F0 // Done
#define free    0x67C2C // Done

#define memory_patch_func      0x2D9740 // Done
#define pathdup_from_user      0x1B7D78 // Done
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x81FF4 // Done
#define memset 0x51DF8 // Done

#define perm_patch_func  0x3560 // Done
#define perm_var_offset -0x7FF8

#define BASE   0x3d90
#define BASE2 (0x3d90+0x400) // Syscall 838
