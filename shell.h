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
char *_catstrg(char *loc, char *add);
int _strlen(char *s);
void printenv(void);
int _strlen(char *s);
void printenv(void);
<<<<<<< HEAD
<<<<<<< HEAD
=======
char *_catstrg(char *loc, char *add);

>>>>>>> c42d1554ed05f395a8e4d9885a826e9ef89a81e5
=======
int _cmpstrgc(char *str0, char *str1);
>>>>>>> lola2

=======
char *_catstrg(char *loc, char *add);

>>>>>>> 1ff5df6622f1179b4807eb4b71384f32b5e8f56b
#endif
