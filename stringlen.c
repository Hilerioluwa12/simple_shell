#include "shell.h"

/**
 * _strlen - finding the length of string
 * @s: string to find length
 * Return: string length of string passed
 */

int _strlen(char *s)
{
	int k;

	k = 0;

	while (s[k] != '\0')
	{
		++k;
	}
	return (k);
}
