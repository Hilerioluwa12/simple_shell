#include "shell.h"


/**
 * _strdup - duplocate of the string pointed to by str
 * @str: input
 * Return: string
 */
char *_strdup(char *str)
{
	int i = 0, j = 0;
	char *cp;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*(str + i) != '\0')
	{
		i++;
	}

	cp = malloc(i * sizeof(char) + 1);

	if (cp == NULL)
	{
		return (NULL);
	}

	while (*(str + j) != '\0')
	{
		cp[j] = str[j];
		j++;
	}

	*(cp + j) = '\0';

	return (cp);
}


/**
 * environ_path - extract path environ variable
 *Return: sting of path env variable
 */
char *environ_path(void)
{
	int i = -1, j, flag = 1;
	char *str_path, *target = "PATH";

	while (environ[++i] && flag)
	{
		if (environ[i][0] == target[0])
		{
			for (j = 1; j < 3; j++)
			{
				if (environ[i][j] != target[j])
				{
					break;
				}
				else if (environ[i][2] == target[2])
				{
					str_path = _strdup(environ[i]);
					flag = 0;
				}
			}
		}
	}
	return (str_path);
}
