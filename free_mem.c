#include "shell.h"

/**
 * clear_memory - free heap memory
 * @args: input
 */

void clear_memory(char **args)
{
	int k;

	if (args && *args)
	{
		for (k = 0; args[k]; k++)
		{
			free(args[k]), args[k] = NULL;
		}
		free(args), args = NULL;
	}
}
