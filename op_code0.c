#include "monty.h"
#include <stdlib.h>

/**
 * push - adds a new node to the beginning of the linked list
 * @head: beginning of linked list
 * @n: value of new node
 * Return: the new node that was added
 */
stack_t *push(stack_t **head, int n)
{
	stack_t *new;

	new = malloc(sizeof(stack_t));
	if (!new)
	{
		if (*head != NULL)
			free_stack(*head);
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}

/**
 * pall - prints doubly linked list
 * @stack: start of doubly linked list
 * @line_n: line number
 */
void pall(stack_t **stack, unsigned int line_n)
{
	stack_t *h = *stack;

	if (!stack)
	{
		fprintf(stderr, "L%d: can't pall, stack empty\n", line_n);
		exit(EXIT_FAILURE);
	}
	for (; h; h = h->next)
		fprintf(stdout, "%d\n", h->n);
}
