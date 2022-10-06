#include "monty.h"
/**
 * make_struct - Set values for struct.
 * @argv: Argument list.
 * Return: Struct for buffers.
 */
buf_struct *make_struct(char *argv[])
{
	static buf_struct a;

	a.argv = argv;
	memset(a.read_buff, 0, sizeof(a.read_buff));
	memset(a.list_cmd, 0, sizeof(a.list_cmd));
	memset(a.tok_cmd, 0, sizeof(a.tok_cmd));

	return (&a);
}
