#include "monty.h"

/**
 *_sub - subtracts the two top elements of the stack from the second element.
 *@head: pointer pointer to the list.
 *@line_number: number of the line.
 **/

void _sub(stack_t **head, unsigned int line_number)
{
	stack_t *aux = *head;

	if (head == NULL || (*head)->next == NULL)
	{
		dprintf(2, "L%u: can't sub, stack too short\n", line_number);
		free_doubly_ll(head);
		free(buf); /* liberamos buffer usado en el main.c - buf --> global variable*/
		exit(EXIT_FAILURE);
	}
	*head = (*head)->next;
	(*head)->n = (*head)->n - aux->n;
	(*head)->prev = NULL;
	del_node(&aux);
}
