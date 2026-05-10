// Defines for PS3 firmware version 3.55 DEX
#define strncmp 0x51F9C // Done
#define strcpy  0x51F48 // Done
#define strlen  0x51F70 // Done
#define alloc   0x64464 // Done
#define free    0x648A0 // Done

#define memory_patch_func      0x2C8ABC // Done
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x8039C // Done
#define memset 0x51D9C // Done

#define perm_patch_func  0xEE38 // Done
#define perm_var_offset -0x7B30

#define BASE   0xF590
#define BASE2 (0xF590+0x400) // Syscall 838
