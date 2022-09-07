#include "shell.h"

/**
 * cpystrg - prints n elements of an array of integers
 * @loc: input
 * @add: input
 * Return: dest
 */

char *cpystrg(char *loc, char *add)
{
	char *i = loc;

	while (*add != '\0')
	{
		*loc = *add;
		add++;
		loc++;
	}
	*loc = '\0';
	return (i);
}
