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
int compile(char **args);
char *path(char *command);

#endif
