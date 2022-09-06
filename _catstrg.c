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
	int len, k;

	len = 0;
	while (loc[len] != '\0')
		len++;

	for (k = 0; add[k] != '\0'; len++)
		loc[len] = add[k];

	loc[len] = '\0';
	return (loc);
}
