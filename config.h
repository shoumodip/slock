/* User and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT]      = "#002b36", /* After initialization */
	[INPUT]     = "#184753", /* During input */
	[FAILED]    = "#dc322f", /* Wrong password */
	[CAPS]      = "#b58900", /* CapsLock on */
};

/* Treat a cleared input like a wrong password (color) */
static const int failonclear = 0;
