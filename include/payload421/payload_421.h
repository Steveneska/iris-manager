#ifndef _PAYLOAD_421_H
#define _PAYLOAD_421_H

#include <unistd.h>

#define SKY10_PAYLOAD 1
#define ZERO_PAYLOAD 0

#define SYS36_PAYLOAD -1
#define WANIN_PAYLOAD -2

extern int is_firm_421(void);
extern void set_bdvdemu_421(int current_payload);
extern void load_payload_421(int mode);
extern int is_payload_loaded_421(void);

#endif
