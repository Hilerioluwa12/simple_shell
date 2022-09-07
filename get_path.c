#include "shell.h"

/**
 *path - locate path of a specific command
 *@filename: command name
 *Return: return specific command if exit
 */
char *path(char *filename)
{
	int i = 0;
	char *token, *list_path, *path, *str_env, *slach = "/\0";

	str_env = environ_path();
	token = strtok(str_env, "=");
	while (token)
	{
		token = strtok(NULL, ":");
		if (token)
		{
			list_path = malloc(sizeof(char) * (_strlen(token) +
				_strlen(filename) + 2));
			/* _cpystrg(list_path, token); */
			path = _catstrg(_catstrg(list_path, slach), filename);
			if (access(path, F_OK) == 0)
			{
				break;
			}
		}
		else
		{
			path = NULL;
			break;
		}
		free(list_path), list_path = NULL;
		i++;
	}
	free(str_env), str_env = NULL;
	return (path);
}
