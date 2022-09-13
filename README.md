# Simple Shell Project

## INTRODUCTION

This project is intended to create a simplified version of the linux shell. This simplified version (hsh) must contain the same functions as the original version (sh). A shell is a command-line interpreter that provides a command line user interface.

## TO cOMPILE

	gcc -Wall -Werror -Wextra -pedantic *.c -o hsh

## The functions and system calls that were allowed to use:

* access (man 2 access)
* chdir (man 2 chdir)
* fork (man 2 fork)
* free (man 3 free)
* getcwd (man 3 getcwd)
* getline (man 3 getline)
* isatty (man 3 isatt)
* kill (man 2 kill)
* malloc (man 3 malloc)
* open (man 2 open)
* opendir (man 3 opendir)
* perror (man 3 perror)
* read (man 2 read)
* readdir (man 3 readdir)
* signal (man 2 signal)
* stat (__xstat) (man 2 stat)
* lstat (__lxstat) (man 2 lstat)
* fstat (__fxstat) (man 2 fstat)
* strtok (man 3 strtok)
* wait (man 2 wait)
* waitpid (man 2 waitpid)
* wait3 (man 2 wait3)
* wait4 (man 2 wait4)
* write (man 2 write)
* close (man 2 close)
* closedir (man 3 closedir)
* execve (man 2 execve)
* exit (man 3 exit)
* _exit (man 2 _exit)
* -fflush (man 3 fflush )

---
## File Structure
shell.h - program header file



[0X02-SHELL_UTILIZATION] - major builtin functions



`my exist- checks to see if the user's command matches a builtin



_mycd - exits the shell with the option of a specified status



`_myhelp - prints the shell's environment variables to the standard output



`` - initializes a new environment variable, or modifies an existing one



removes an environment variable

[helper.c) - helper functions for the builtins



int interactive - creates a new environment variable



is_delim - finds an environment variable in the environment array



int _isalpha` - creates a new environment variable string



_atoi - converts a string into a non-negative integer



environment.c - functions related to the environment



make_env - creates the shell's environment from the parent process



free_env - frees the shell's environment



errors.c - functions related to printing errors



print_error - prints an error message to the standard error



_puts2 - prints a string to the standard error



_uitoa - converts an unsigned integer to a string



memory_allocation.c - memory allocation functions



_realloc - a custom realloc function for arrays of pointers

new_strtok.c - custom strtok and helper functions



check_match - checks if a character matches any in a string



new_strtok - a custom strtok for the shell



path.c - functions related to executing commands



path_execute - executes a command in the PATH



find_path - finds the PATH environment variable



check_for_path - checks if the command is in the PATH



execute_cwd - executes a command with an absolute path



check_for_dir - checks if the command contains an absolute path



- [simple_shell.c](https://github.com/Hilerioluwa12/simple_shell/blob/master/simple_shell.c) - essential functions to the shell
	- main - the main function of the program
- [strg_func.c](https://github.com/Hilerioluwa12/simple_shell/blob/master/strg_func.c) - functions related to string manipulation
	- _strlen - length of a string
	- _strcmp - performs lexicographic comparison of two strings
	- starts_with - checks if needle starts with haystack
	- _strcat - concatenates two strings
- [strg_func1.c](https://github.com/Hilerioluwa12/simple_shell/blob/master/strg_func1.c) - functions related to string manipulation
	- _strcpy - Copy a string
	-  _strdup - duplicates a string
	- _puts - print an input string
	- _putchar - writes the character c to stdout
- [tokenize.c](https://github.com/Hilerioluwa12/simple_shell/blob/master/tokenize.c) - tokenizing function
	- tokenize - creates an array of tokens from a buffer with a specified delimiter
