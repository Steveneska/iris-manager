#ifndef _PAYLOAD_460DEX_H
#define _PAYLOAD_460DEX_H

#include <unistd.h>

#define SKY10_PAYLOAD 1
#define ZERO_PAYLOAD 0

#define SYS36_PAYLOAD -1
#define WANIN_PAYLOAD -2

extern int is_firm_460dex(void);
extern void set_bdvdemu_460dex(int current_payload);
extern void load_payload_460dex(int mode);
extern int is_payload_loaded_460dex(void);

#endif
