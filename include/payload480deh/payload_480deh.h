#ifndef _PAYLOAD_480DEH_H
#define _PAYLOAD_480DEH_H

#include <unistd.h>

#define SKY10_PAYLOAD 1
#define ZERO_PAYLOAD 0

#define SYS36_PAYLOAD -1
#define WANIN_PAYLOAD -2

extern int is_firm_480deh(void);
extern void set_bdvdemu_480deh(int current_payload);
extern void load_payload_480deh(int mode);
extern int is_payload_loaded_480deh(void);

#endif
