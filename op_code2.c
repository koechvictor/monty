#include "monty.h"

/**
 * nop - Does nothing.
 * @stack: Unused.
 * @line_n: Unused.
 */
void nop(stack_t **stack, unsigned int line_n)
{
	(void)*stack;
	(void)line_n;
}

/**
 * pchar - Print the char based on ascii value.
 * @stack: beginning of linked list.
 * @line_n: line number.
 */
void pchar(stack_t **stack, unsigned int line_n)
{
	stack_t *h = *stack;

	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_n);
		exit(EXIT_FAILURE);
	}
	if (!(h->n > 64 && h->n < 91) && !(h->n > 96 && h->n < 123))
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_n);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", (char)h->n);
}
