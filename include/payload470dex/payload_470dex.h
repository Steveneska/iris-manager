#ifndef _PAYLOAD_470DEX_H
#define _PAYLOAD_470DEX_H

#include <unistd.h>

#define SKY10_PAYLOAD 1
#define ZERO_PAYLOAD 0

#define SYS36_PAYLOAD -1
#define WANIN_PAYLOAD -2

extern int is_firm_470dex(void);
extern void set_bdvdemu_470dex(int current_payload);
extern void load_payload_470dex(int mode);
extern int is_payload_loaded_470dex(void);

#endif
