#ifndef _PAYLOAD_431_H
#define _PAYLOAD_431_H

#include <unistd.h>

#define SKY10_PAYLOAD 1
#define ZERO_PAYLOAD 0

#define SYS36_PAYLOAD -1
#define WANIN_PAYLOAD -2

extern int is_firm_431(void);
extern void set_bdvdemu_431(int current_payload);
extern void load_payload_431(int mode);
extern int is_payload_loaded_431(void);

#endif
