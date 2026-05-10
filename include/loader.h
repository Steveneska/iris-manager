// #define BDUMOUNT_LOADER 1 // Remove comment for BD Dismount Loader
// #define LASTPLAY_LOADER 1 // Remove comment for Last Play Loader

#if defined(LASTPLAY_LOADER) || defined(BDUMOUNT_LOADER) || defined(PRXMAMBA_LOADER)
	#define LOADER_MODE 1
#else
	#undef  LOADER_MODE
#endif
