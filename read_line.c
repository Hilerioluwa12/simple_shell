#include "shell.h"

/**
 * readline - Reads the input from strandard input
 *
 * Return: Successful for line read and NULL for failed line
 */

char *readline(void)
{
	char *line = '\0';
	size_t bufsize = 0;
	int length = 0;

	length = getline(&line, &bufsize, stdin);
	if (length == -1)
	{
		free(line);
		return ('\0');
	}
	if (line[length - 1] == '\n')
		line[length - 1] = '\0';

	return (line);
}
