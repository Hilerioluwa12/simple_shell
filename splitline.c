#include "shell.h"
#define BUFSIZE 1024


/**
 * token_env - Tokenize the path to return folders
 * @pa: The path string to convert to an array
 * Return: An array of the directories
 */

char **token_env(char *pat)
{
	char *pat_copy = pat;
	int j = 0;
	char *token;
	static char *arr[20] = {NULL};

	if (pat == NULL)
		return (NULL);

	token = strtok(pat_copy, ":");
	while (token != NULL)
	{
		arr[j++] = token;
		token = strtok(NULL, ":");
	}
	return (arr);
}


/**
 * splitline - splits a line passed to it and store content in array
 * @lin: line to be split
 *
 * Return: The array of tokens if successful
 */

char **splitline(char *lin)
{
	int bufsize = BUFSIZE, position = 0;
	char **tokens = malloc(bufsize * sizeof(char *));
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
