#include "monty.h"
/**
 * split_newline - Tokenizes read buffer on newlines.
 * @a: Global struct for buffers.
 * Return: Tokenized list of commands.
 */
char **split_newline(buf_struct *a)
{
	char delim[] = "\n";
	char *token;
	int i = 0;

	token = strtok(a->read_buff, delim);

	while (token != NULL)
	{
		a->list_cmd[i] = token;
		token = strtok(NULL, delim);
		i++;
	}
	if (a->list_cmd[0] == NULL)
		return (NULL);
	return (a->list_cmd);
}
