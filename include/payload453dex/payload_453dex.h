#ifndef _PAYLOAD_453DEX_H
#define _PAYLOAD_453DEX_H

#include <unistd.h>

#define SKY10_PAYLOAD 1
#define ZERO_PAYLOAD 0

#define SYS36_PAYLOAD -1
#define WANIN_PAYLOAD -2

extern int is_firm_453dex(void);
extern void set_bdvdemu_453dex(int current_payload);
extern void load_payload_453dex(int mode);
extern int is_payload_loaded_453dex(void);

#endif
