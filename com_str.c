#include "shell.h"

/**
 * _cmpstrn - comparing number of bytes in strings
 * @str0: first string to be compared
 * @str1: second string to be compared
 * @n: number of bytes to be checked
 * Return: less than 0 if str0 is less than str1
 * greater 0 if str1 is less than str0 and 0 if equal to eachother
 */

int _cmpstrn(char *str0, char *str1, int n)
{
	if (!n)
		return (0);
	if (*str0 == *str1)
		return (*str0 ? _cmpstrn(str0 + 1, str1 + 1, n - 1) : 0);
	if (*str0)
		return (1);
	if (*str1)
		return (-1);
	return (*str0 - *str1);
}	
