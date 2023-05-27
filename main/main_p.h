/*
*   Copyright (c) 1998-2002, Darren Hiebert
*
*   This source code is released for free distribution under the terms of the
*   GNU General Public License version 2 or (at your option) any later version.
*
*   Main part private interface to main.c
*/
#ifndef CTAGS_MAIN_MAIN_PRIVATE_H
#define CTAGS_MAIN_MAIN_PRIVATE_H

/*
*   INCLUDE FILES
*/
#include "general.h"  /* must always come first */

/*
*   FUNCTION PROTOTYPES
*/
int ctags_cli_main (int argc, char **argv);

__declspec(dllexport) char* ctags_cli_lib (int argc, char **argv);
__declspec(dllexport) void ctags_cli_lib_free(char* str);

#endif  /* CTAGS_MAIN_MAIN_PRIVATE_H */
