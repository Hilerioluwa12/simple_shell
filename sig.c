#include "shell.h"

/**
 * sigint_handler - handles signal when user types ctrl + c
 * @signal: the signal
 *
 * Return: void
 */

void sigint_handler(int signal)
{
	(void)signal;
	printf("\n");
	write(STDOUT_FILENO, "$ ", 2);
	fflush(stdout);
}
