#include "shell.h"

/**
 *commd_pmpt - Display a prompt shell for user to type a command
 *Return: entered command by user
 */

char *commd_pmpt(void)
{
	size_t siz = 0;
	int index;
	char *buf;

	if (isatty(STDIN_FILENO))
		printf("$: ");
	index = getline(&buf, &siz, stdin);
	if (index == EOF)
	{
		free(buf);
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "\n", 1);
		exit(EXIT_SUCCESS);
	}
	buf[index - 1] = '\0';

	return (buf);
}
