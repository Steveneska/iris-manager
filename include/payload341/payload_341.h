#ifndef _PAYLOAD_341_H
#define _PAYLOAD_341_H

#include <unistd.h>

#define HERMES_PAYLOAD 2
#define ZERO_PAYLOAD 0

#define SYS36_PAYLOAD -1
#define WANIN_PAYLOAD -2

extern int is_firm_341(void);
extern void set_bdvdemu_341(int current_payload);
extern void load_payload_341(int mode);
extern int is_payload_loaded_341(void);

#endif
