#include "shell.h"

/**
 *_error - prints error msg
 *@line: number line
 *@args: name of the program
 *@str: args cause the error
 */

void _error(char **args, char *str)
{
	write(STDERR_FILENO, args[0], _strlen(args[0]));
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, ": ", 2);
	write(STDERR_FILENO, str, _strlen(str));
	write(STDERR_FILENO, ": not found\n", 12);
}
