#ifndef _PAYLOAD_455_H
#define _PAYLOAD_455_H

#include <unistd.h>

#define SKY10_PAYLOAD 1
#define ZERO_PAYLOAD 0

#define SYS36_PAYLOAD -1
#define WANIN_PAYLOAD -2

extern int is_firm_455(void);
extern void set_bdvdemu_455(int current_payload);
extern void load_payload_455(int mode);
extern int is_payload_loaded_455(void);

#endif
