#include "shell.h"

/**
  * get_path - Gets the full path of a command given
  * @command: The command to find the full path for
  *
  * Return: The full path if succesful
  */

char *path(char *command)
{
	struct stat st;
	int i;
	char *pat = _enviro("PATH");
	char **dirs = token_env(path);
	char *cmd = command;
	char *fullpath = malloc(sizeof(char) * 1024);

	if (fullpath == '\0')
		return ('\0');

	for (i = 0; dirs[i]; i++)
	{
		fullpath[0] = 0;
		_strcat(fullpath, dirs[i]);
		_strcat(fullpath, "/");
		_strcat(fullpath, cmd);
		if (stat(fullpath, &st) == 0)
			return (fullpath);

	}
	free(fullpath);

	return ('\0');
}
