#include "shell.h"

/**
 * printenv- Prints all the environment variables
 *
 */

void printenv(void)
{
	int k;

	for (k = 0; environ[k]; k++)
		printf("%s\n", environ[k]);
}
