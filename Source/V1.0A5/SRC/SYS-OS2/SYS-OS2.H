// sys-dos.h -- MJC

/*
 * This file contains some system-specific stuff for DOS systems.
 */

extern int install_timer (void);
extern void remove_timer (void);
extern int install_sound (int digi, int midi, char *cfg_path);
extern void remove_sound (void);
