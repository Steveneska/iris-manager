// Defines for PS3 firmware version 3.55 DEH
#define strncmp 0x52468 // Done
#define strcpy  0x52414 // Done
#define strlen  0x5243C // Done
#define alloc   0x64930 // Done
#define free    0x64D6C // Done

#define memory_patch_func      0x2E321C // Done
#define pathdup_from_user      0x194D50 // Done
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x80B10 // Done
#define memset 0x52268 // Done

#define perm_patch_func	 0xEE38  // Done
#define perm_var_offset -0x7B30

#define BASE   0xF590
#define BASE2 (0xF590+0x400) // Syscall 838
