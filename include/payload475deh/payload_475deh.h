#ifndef _PAYLOAD_475DEH_H
#define _PAYLOAD_475DEH_H

#include <unistd.h>

#define SKY10_PAYLOAD 1
#define ZERO_PAYLOAD 0

#define SYS36_PAYLOAD -1
#define WANIN_PAYLOAD -2

extern int is_firm_475deh(void);
extern int is_firm_476deh(void);
extern int is_firm_478deh(void);
extern int is_firm_481deh(void);
extern int is_firm_482deh(void);
extern int is_firm_483deh(void);
extern int is_firm_484deh(void);
extern int is_firm_485deh(void);
extern int is_firm_486deh(void);
extern int is_firm_487deh(void);
extern int is_firm_488deh(void);
extern int is_firm_489deh(void);
extern int is_firm_490deh(void);
extern int is_firm_49Xdeh(void);
extern void set_bdvdemu_475deh(int current_payload);
extern void load_payload_475deh(int mode);
extern int is_payload_loaded_475deh(void);

#endif
