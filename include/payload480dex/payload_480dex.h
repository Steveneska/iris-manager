#ifndef _PAYLOAD_480DEX_H
#define _PAYLOAD_480DEX_H

#include <unistd.h>

#define SKY10_PAYLOAD 1
#define ZERO_PAYLOAD 0

#define SYS36_PAYLOAD -1
#define WANIN_PAYLOAD -2

extern int is_firm_480dex(void);
extern void set_bdvdemu_480dex(int current_payload);
extern void load_payload_480dex(int mode);
extern int is_payload_loaded_480dex(void);

#endif
