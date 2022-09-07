#include "shell.h"

/**
 *printenv_cmd - display all environment command
 *@cmd: command entered by user
 *Return: command line
 */
char *printenv_cmd(char **cmd)
{
	int i;

	if (!_cmpstrgc(cmd[0], "exit"))
	{
		clear_memory(cmd);
		exit(EXIT_SUCCESS);
	}
	else if (!_cmpstrgc(cmd[0], "env"))
	{
		for (i = 0 ; environ[i] ; i++)
		{
			write(STDOUT_FILENO, environ[i], _strlen(environ[i]));
			write(STDOUT_FILENO, "\n", 1);
		}
		clear_memory(cmd);
		return (NULL);
	}
	else
	{
		return (cmd[0]);
	}
}
