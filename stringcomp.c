#include "shell.h"

/**
 * _cmpstrgc - Function to compare two string
 * @str0: string 1
 * @str1: string 2
 *
 * Return: Negative if less than, positive if greater than and 0 if equal
 */

int _cmpstrgc(char *str0, char *str1)
{
	int ed;
	int j = 0;

	for (j = 0; str0[j] && str1[j]; j++)
	{
		if (str0[j] == str1[j])
			continue;
		else
			break;
	}
	ed = str0[j] - str1[j];
	return (ed);
}
