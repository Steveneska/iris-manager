#ifndef _PAYLOAD_446_H
#define _PAYLOAD_446_H

#include <unistd.h>

#define SKY10_PAYLOAD 1
#define ZERO_PAYLOAD 0

#define SYS36_PAYLOAD -1
#define WANIN_PAYLOAD -2

extern int is_firm_446(void);
extern void set_bdvdemu_446(int current_payload);
extern void load_payload_446(int mode);
extern int is_payload_loaded_446(void);

#endif
