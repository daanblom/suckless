/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */
#define wal "/home/db/.cache/wal/colors-wal-dmenu.h"

static int topbar = 1; /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static int centered = 0; /* -c option; centers dmenu on screen */
static int min_width = 1500; /* minimum width when centered */
static const float menu_height_ratio = 4.0f;  /* This is the ratio used in the original calculation */
static const char *fonts[] = {"SauceCodePro NF:size=12"};
static const char *prompt =  NULL; /* -p  option; prompt to the left of input field */
#if __has_include(wal)
#include wal
#else
static const char *colors[SchemeLast][2] = {
    /*     fg         bg       */
    [SchemeNorm] = {"#bbbbbb", "#222222"},
    [SchemeSel] = {"#eeeeee", "#c6a05c"},
    [SchemeOut] = {"#000000", "#aa7e2e"},
};

#endif

/* -l option; if nonzero, dmenu uses vertical list with given number of lines */
static unsigned int lines = 0;
/* -h option; minimum height of a menu line */
static unsigned int lineheight = 0;
static unsigned int min_lineheight = 8;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";
