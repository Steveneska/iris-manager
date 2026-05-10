/* fm.h - File Manager */

#ifndef __FM__
#define __FM__

#define KBSZ	(1024)			// KB: 1024
#define MBSZ	(1048576)		// MB: 1024*1024
#define GBSZ	(1073741824)	// GB: 1024*1024*1024

typedef enum {
	FS_TNONE = 0,
	FS_TSYS,
	FS_TNTFS,
	FS_TEXT,
	FS_TFAT,
} FS_TYPE;

struct fm_file {
	char *name;
	char dir;
	unsigned long size;

	char selected;

	struct fm_file *prev;
	struct fm_file *next;
};

struct fm_panel {
	char *path;					// Current path: full path, including drive identifier
	struct fm_file *entries;	// Entries
	struct fm_file *history;	// Browsing history: directories which were traversed
	struct fm_file *current;	// Current entry/selection
	unsigned int current_idx;	// Index of currently selected item, for scrolling

	int x, y, w, h;	// Position + dimensions
	char active;	// Panel is active or not
	char fs_type;	// File system type for panel

	int files;
	int dirs;
	int sels;
	unsigned long long fsize;
};

struct fm_job {
	char *spath;				// Current path: full path, including drive identifier
	char *dpath;				// Current path: full path, including drive identifier
	struct fm_file *entries;	// Entries

	char stype;	// File system type for source
	char dtype;	// File system type for destination

	int files;
	int dirs;
	unsigned long long fsize;
};

int fm_entry_add (struct fm_file **entries, char *fn, char dir, unsigned long fsz);
int fm_entry_pull (struct fm_file **entries);

// List file management job
int fm_job_list (char *path);
int fm_job_add (struct fm_job *p, char *fn, char dir, unsigned long fsz);

// Clear file management job
int fm_job_clear (struct fm_job *job);

// Copy files/directories from source to destination
int fm_job_copy (struct fm_panel *p, char *src, char *dst, int (*ui_render)(int dt));

// Remove files/directories from source
int fm_job_delete (struct fm_panel *p, char *src, int (*ui_render)(int dt));
int fm_job_rename (char *path, char *old, char *new);

int fm_job_newdir (char *path, char *new);

// Draw (4) status messages
int fm_status_draw (int dat);

// Set status message for index
int fm_status_set (char *sm, int idx, int col);
void fm_toggle_selection (struct fm_panel *p);
void fm_panel_select_all (struct fm_panel *p, char sel);

int fm_panel_enter (struct fm_panel *p);
int fm_panel_exit (struct fm_panel *p);
int fm_panel_reload (struct fm_panel *p);

int fm_panel_clear (struct fm_panel *p);
int fm_panel_scan (struct fm_panel *p, char *path);

int fm_panel_init (struct fm_panel *p, int x, int y, int w, int h, char act);
int fm_panel_draw (struct fm_panel *p);

// Scroll current item up/down
int fm_panel_scroll (struct fm_panel *p, int dn);

// Locate item and set as current
int fm_panel_locate (struct fm_panel *p, char *path);

// Add file/directory entry to panel
int fm_panel_add (struct fm_panel *p, char *fn, char dir, unsigned long fsz);

// Remove file/directory entry from panel
int fm_panel_del (struct fm_panel *p, char *fn);

int fm_fname_get (struct fm_file *link, int cw, char *out);

int fm_menu_show (void);

#endif
