/* User and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT]      = "#121212", /* After initialization */
	[INPUT]     = "#3a3a3a", /* During input */
	[FAILED]    = "#d68787", /* Wrong password */
	[CAPS]      = "#d8af5f", /* CapsLock on */
};

/* Treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
