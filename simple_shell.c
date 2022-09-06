#include "shell.h"

/**
  * main - Function that starts a simple shell
  *
  * Return: 1 on success
  */

int main(void)
{
	int status = 1;
	char *lin;
	char **args;

	signal(SIGINT, sigint_handler);
	while (status)
	{
		status = isatty(STDIN_FILENO);

		if (status == 1)
			write(STDOUT_FILENO, "$ ", 2);

		lin = readline();
		if (!lin)
		{
			return (0);
		}
<<<<<<< HEAD
		if (_cmpstrg(lin, "exit") == 0)
=======
		if (_cmpstrgc(lin, "exit") == 0)
>>>>>>> lola2
		{
			free(lin);
			return (0);
		}
<<<<<<< HEAD
		if (_cmpstrg(lin, "env") == 0)
=======
		if (_cmpstrgc(lin, "env") == 0)
>>>>>>> lola2
		{
			printenv();
			free(lin);
			continue;
		}
		args = splitline(lin);
		if (args == NULL)
		{
			free(lin);
			free(args);
			continue;
		}
		status = execute(args);
		free(lin);
		free(args);
	}
	return (0);
}
