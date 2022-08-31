#include "shell.h"
#define BUFSIZE 1024

/**
 * splitline - splits a line passed to it and store content in array
 * @line: line to be split
 *
 * Return: The array of tokens if successful
 */

char **splitline(char *lin)
{
	int bufsiz = BUFSIZ, position = 0;
	char *tokens = malloc(bufsiz sizeof(char *));
	char *token;

	if (!tokens)
	{
		perror("hsh");
		exit(EXIT_FAILURE);
	}

	token = strtok(lin, " ");
	while (token != NULL)
	{
		tokens[position] = token;
		position++;
		token = strtok(NULL, " ");
	}
	tokens[position] = NULL;

	return (tokens);
}
