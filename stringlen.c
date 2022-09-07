#include "shell.h"

/**
 * _strlen - finding the length of string
 * @s: string to find length
 * Return: string length of string passed
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen(s + 1));
}
