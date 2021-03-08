/* User and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT]      = "#262626", /* After initialization */
	[INPUT]     = "#303030", /* During input */
	[FAILED]    = "#af5f5f", /* Wrong password */
	[CAPS]      = "#87875f", /* CapsLock on */
};

/* Treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
