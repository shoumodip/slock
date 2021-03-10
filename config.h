/* User and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT]      = "#282828", /* After initialization */
	[INPUT]     = "#3c3836", /* During input */
	[FAILED]    = "#9d0006", /* Wrong password */
	[CAPS]      = "#689d6a", /* CapsLock on */
};

/* Treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
