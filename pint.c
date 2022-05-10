#include "monty.h"

/**
 * pint - print all nodes in stack from top to bottom.
 * @head: pointer at the beginning of the list.
 * @line_number: bytecode line number.
 */

void pint(stack_t **head, unsigned int line_number)
{
	if (head == NULL || *head == NULL)
	{
		dprintf(2, "L%u: can't pint, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
