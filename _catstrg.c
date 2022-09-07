#include "shell.h"

/**
 * _catstrg - Concatenate two strings passed to it
 * @loc: The location of string
 * @add: The string to be added
 *
 * Return: Pointer to the new string
 */

char *_catstrg(char *loc, char *add)
{
	int l = 0, k = 0;

	l = _strlen(loc);

	while (*(add + k) != '\0')
	{
		*(loc + l) = *(add +k);
		l++;
		k++;
	}
	*(loc + l) = '\0';
	return (loc);
}
