#ifndef _SHELL_H_
#define _SHELL_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

extern char **environ;
#define _POSIX_C_SOURCE 200809L

int main(int ac, char **av, char **env);
void prompt(void);
void handle(int signals);
void _EOF(char *buffer);
void shell_exit(char **command);

void create_child(char **command, char *name, char **env, int cicles);
int change_dir(const char *path);

void execute(char **command, char *name, char **env, int cicles);
void print_env(char **env);
char *_strdup(char *str);
char **_getPATH(char **env);
char *environ_path(void);
void msgerror(char *name, int cicles, char **command);

char **tokening(char *buffer, const char *s);

void free_dp(char **command);
void free_exit(char **command);

int _strcmp(char *s1, char *s2);
unsigned int _strlen(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);

#endif /* _SHELL_H_ */
