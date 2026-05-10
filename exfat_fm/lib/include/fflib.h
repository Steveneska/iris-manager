/* fflib.h */

#include "types.h"

#define MAXFDS  128

// Initialize the FATFS managed lib
int fflib_init();

/*
Attach a drive number/IDx to a system device ID

FATFS uses drive numbers like 0:/, 1:/, 2:/, etc...
This allows attaching a system device ID to a drive number

If you want to probe for FAT/ExFAT FS on the drive, use 'now'
e.g. fflib_attach (0, 0x010300000000000AULL, 1);
This will assign drive 0 to system device 0x010300000000000AULL and probe for FAT/ExFAT
the assignment will remain even if a FAT/ExFAT FS is not found,
Use 'fflib_detach' to de-assign
*/
int fflib_attach(int idx, u64 id, int now);

// Detach a drive number/IDx from a system device
int fflib_detach(int idx);

// Get system device ID assigned to the drive number/IDx
u64 fflib_id_get(int idx);

// Get file descriptor associated to a drive number/IDx
int fflib_fd_get(int idx);

// Get sector size associated to a drive number/IDx
int fflib_ss_get(int idx);

// Set file descriptor associated to a drive number/IDx. This shouldn't be used in app
int fflib_fd_set(int idx, int fd);

// Set sector size associated to a drive number/IDx. This shouldn't be used in app
int fflib_ss_set(int idx, int ss);

/*
Returns f_stat on a path like FR_OK, FR_NO_FILE Could not find the file in the directory,
FR_NO_PATH Could not find the path. A directory in the path name could not be found
or other errors according to f_stat
*/
int fflib_is_fatfs (char *path);

int fflib_file_to_sectors(const char *path, uint32_t *sec_out, uint32_t *size_out, int max, int phys);
