#include "shell.h"

/**
 * _environ - finds the environment variable requested by user
 * @n: environment variable requested by user
 * Return: value of the environment variable
 */

char *_environ(char *n)
{
	int b, lengt;

	lengt = _strlen(n);
	for (b = 0; environ[b]; b++)
	{
		if (_cmpstrn(environ[b], n, lengt) == 0)
			return (environ[b] + lengt + 1);
	}
	return (NULL);
}
