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
- [shell.h](https://github.com/Hilerioluwa12/simple_shell/blob/master/shell.h) - header file
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
	- strtow - splits a string into words. Repeated delimiters are ignored
	- strtow2 - splits a string into words
