#include "shell.h"

/**
 *arg_save - store all arguments entred in array
 *@buf: string of command line
 *@ls: list of character
 *Return: array of argument
 */

char **arg_save(char *buf, char *ls)
{
	char **args, *token, *str;
	int nb, k = 0;

	nb = count_args(buf, ' ');
	token = strtok(buf, ls);
	args =  malloc(sizeof(char *) * (nb + 1));

	/* handle malloc allocation error*/

	args[k] = _strdup(token);
	while (token && ++k)
	{
		token = strtok(NULL, ls);
		if (token)
		{
			args[k] = _strdup(token);
		}
	}
	args[k] = NULL;
	if (arg_count(args[0], '/') > 1)
	{
		token = strtok(args[0], "/");
		while (token)
		{
			str = _strdup(token);
			token = strtok(NULL, "/");
			if (token)
			{
				free(str), str = NULL;
			}
		}
		free(args[0]), args[0] = NULL;
		args[0] = _strdup(str);
		free(str), str = NULL;
	}
	free(buf), buf = NULL;
	return (args);
}
