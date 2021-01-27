/* User and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT]      = "#161616", /* After initialization */
	[INPUT]     = "#282828", /* During input */
	[FAILED]    = "#cc241d", /* Wrong password */
	[CAPS]      = "#d79921", /* CapsLock on */
};

/* Treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
