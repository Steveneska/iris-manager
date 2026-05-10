// Defines for PS3 firmware version 4.75 CEX
#define strncmp 0x4D86C
#define strcpy  0x4D818
#define strlen  0x4D840
#define alloc   0x64824
#define free    0x64C60

#define memory_patch_func      0x297660
#define open_mapping_table_ext 0x7fff00

// Common Symbols PL3
#define memcpy 0x7E92C
#define memset 0x4D66C

#define perm_patch_func  0x3560
#define perm_var_offset -0x7FF8

#define BASE   0x3D90
#define BASE2 (0x3D90+0x400) // Syscall 838
