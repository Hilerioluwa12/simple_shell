#include "shell.h"

/**
 * _cmpstrn - comparing number of bytes in strings
 * @str0: first string to be compared
 * @str1: second string to be compared
 *
 * Return: integer value
 */

int _cmpstrn(char *str0, char *str1)
{
	int b = 0;
	int i = 0;

	while (str0[b] == str1[b] && str0[b] != '\0')
	{
		b++;
	}
	i += str0[b] - str1[b];
	return (i);
}
