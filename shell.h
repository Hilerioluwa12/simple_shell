#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <wait.h>
#include <sys/types.h>
#include <errno.h>
#include <sys/stat.h>

/* Environment global variable */
extern char **environ;

void sigint_handler(int signal);
char **splitline(char *lin);
char **token_env(char *path);
char *readline(void);
int execute(char **args);
char *path(char *command);
int _cmpstrn(char *str0, char *str1, int n);
char *_environ(char *n);
int _strlen(char *s);
void printenv(void);

#endif
