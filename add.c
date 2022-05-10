#include "monty.h"

/**
 *_add - add the two top elements of the stack.
 *@head: pointer pointer to the list.
 *@line_number: number of the line.
 **/

void _add(stack_t **head, unsigned int line_number)
{
	stack_t *aux = *head;

	if (head == NULL || *head == NULL)
	{
		dprintf(2, "L%u: can't add, stack too short\n", line_number);
		free_doubly_ll(head);
		exit(EXIT_FAILURE);
	}
	*head = (*head)->next;
	(*head)->n = (*head)->n + aux->n;
	(*head)->prev = NULL;
	del_node(&aux);
}
