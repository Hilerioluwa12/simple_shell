#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>

void sigint_handler(int signal);
char **splitline(char *lin);
char **token_env(char *pat);
<<<<<<< HEAD
char *readline(void);
=======
int compile(char **args);
char *path(char *command);
>>>>>>> b14cef598f5e6dc3dc483caa5e12ed996f247e5e

#endif
