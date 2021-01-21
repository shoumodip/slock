/* User and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT]      = "#1d1f21", /* After initialization */
	[INPUT]     = "#383938", /* During input */
	[FAILED]    = "#cc6666", /* Wrong password */
	[CAPS]      = "#f0c674", /* CapsLock on */
};

/* Treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
