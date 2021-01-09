/* User and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT]      = "#161616", /* After initialization */
	[INPUT]     = "#4d6e4e", /* During input */
	[FAILED]    = "#9d0006", /* Wrong password */
	[CAPS]      = "#cc8c3c", /* CapsLock on */
};

/* Treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
