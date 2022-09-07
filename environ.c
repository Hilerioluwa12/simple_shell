#include "shell.h"

/**
 *environ_path - extract path environ variable
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
