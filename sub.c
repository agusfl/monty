#include "monty.h"
/**
 *sub - sub two top elements of the stack
 *@head: pointer a stack
 *@line_number: number of the line
 **/
void _sub(stack_t **head, unsigned int line_number)
{
	stack_t *aux = *head;

	if (head == NULL || *head == NULL)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", line_number);
		free_doubly_ll(head);
		exit(EXIT_FAILURE);
	}
	*head = (*head)->next;
	(*head)->n = (*head)->n - aux->n;
	(*head)->prev = NULL;
	del_node(&aux);
}
