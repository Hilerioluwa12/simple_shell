#ifndef SHELL_H
#define SHELL_H

extern char **environ;
#define _POSIX_C_SOURCE 200809L

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>

char *_strdup(char *str);
char *_catstrg(char *loc, char *add);
int _cmpstrgc(char *str0, char *str1);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_uitoa(unsigned int count);

char *environ_path(void);
char *prompt_cmd(void);
char *parsing_cmd(char **cmd);
char **arg_save(char *buf, char *ls);
char **store_args(char *buff, char *delims);
char *path(char *filename);
unsigned int count_args(char *str, const char c);
void _error(int line, char **args, char *str);
void clear_memory(char **args);

#endif
