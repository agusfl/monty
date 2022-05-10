#include "monty.h"

/**
 * pall - print all nodes in stack.
 * @head: pointer at the beginning of the list.
 * @line_number: bytecode line number.
 */

void pall(stack_t **head, unsigned int line_number)
{
	stack_t *tmp = NULL;

	if (h != NULL || *h != NULL)
		return;

	tmp = *head;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
	}
}
