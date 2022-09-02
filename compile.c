#include "shell.h"

/**
  * compile - compile the commands entered by the user
  * @args: The list of commands and arguments the user entered
  * Return: 1 if succesful 0 if not
  */

int compile(char **args)
{
	pid_t my_pid;
	char *command = args[0];
	int status;



	my_pid = fork();
	if (my_pid == -1)
	{
		perror("hsh");
	}

	if (my_pid == 0)
	{
		if (command[0] == '/' || command[0] == '.')
			command = args[0];
		else
			command = path(command);

		if (!command)
		{
			perror("hsh");
			return (0);
		}

		if (compile(command, args, '\0') == -1)
		{
			perror("hsh");
		}
	}
	else
	{
		wait(&status);
	}
	return (1);
}
