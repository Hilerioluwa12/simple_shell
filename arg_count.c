#include "shell.h"

/**
 * arg_count - count the number of arguments entered
 * @str: type of string entered
 * @str1: constant input
 * Return: arguments count
 */

unsigned int arg_count(char *str, const char str1)
{
	unsigned int b, count = 0;

	for (b = 0; str[b]; b++)
	{
		if (str[b] == str1 && str[b + 1] != str1)
			count++;
	}
	return (count + 1);
}
