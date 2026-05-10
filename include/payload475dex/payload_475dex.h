#ifndef _PAYLOAD_475DEX_H
#define _PAYLOAD_475DEX_H

#include <unistd.h>

#define SKY10_PAYLOAD 1
#define ZERO_PAYLOAD 0

#define SYS36_PAYLOAD -1
#define WANIN_PAYLOAD -2

extern int is_firm_475dex(void);
extern int is_firm_476dex(void);
extern int is_firm_478dex(void);
extern void set_bdvdemu_475dex(int current_payload);
extern void load_payload_475dex(int mode);
extern int is_payload_loaded_475dex(void);

#endif
