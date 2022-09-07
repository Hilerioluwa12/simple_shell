#include "shell.h"

/**
 *_uitoa - convert an integer to string
 *@count: integer to be converted
 *Return: string
 */
char *_uitoa(unsigned int count)
{
	char *numstr = NULL;
	unsigned int tmp = 0, digits = 0;

	tmp = count;
	for (digits = 0; tmp != 0; digits++)
	{
		tmp /= 10;
	}
	numstr = malloc(sizeof(char) * (digits + 1));
	if (numstr == NULL)
	{
		perror("Fatal Error");
		exit(127);
	}
	numstr[digits] = '\0';
	for (--digits; count; --digits)
	{
		numstr[digits] = (count % 10) + '0';
		count /= 10;
	}
	return (numstr);
}
