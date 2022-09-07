#include "shell.h"

/**
 * change_dir - A function that changes working directory.
 * @path: The new current working directory.
 * Return: 0 on success, -1 on failure.
 */

int change_dir(const char *path)
{
	char *buf = NULL;
	size_t size = 1024;

	if (path == NULL)
		path = getcwd(buf, size);
	if (chdir(path) == -1)
	{
		perror(path);
		return (98);
	}
	return (1);
}
