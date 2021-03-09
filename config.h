/* User and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT]      = "#2b2b2b", /* After initialization */
	[INPUT]     = "#323232", /* During input */
	[FAILED]    = "#bc3f3c", /* Wrong password */
	[CAPS]      = "#6a8759", /* CapsLock on */
};

/* Treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
