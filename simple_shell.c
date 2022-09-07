#include "shell.h"

/**
 *main - Function that start a shell program
 *@argc: unused
 *@argv: program name
 *Return: 0
 **/
int main(int argc __attribute__((unused)), char **argv)
{
	char *buf, ls[] = " ", *str, *error, **args;
	int line = 0;
	pid_t pid = 0;

	while (1)
	{
		line++;
		buf = commd_pmpt();
		args = arg_save(buf, ls);
		buf = NULL;
		buf = printenv_cmd(args);
		if (buf)
		{
			str = path(args[0]);
			error = strdup(args[0]);
			free(args[0]), args[0] = NULL;
			args[0] = _strdup(str);
			free(str), str = NULL;
			if (!args[0])
			{
				_error(line, &argv[0], error);
				free(error), error = NULL;
			}
			else
			{
				free(error), error = NULL;
				pid = fork();
				if (pid == 0)
				{
					execve(args[0], args, NULL);
				}
				else if (pid > 0)
					waitpid(pid, NULL, 0);
			}
		}
		clear_memory(args);
	}
	return (0);
}
