#include "monty.h"

/**
 *_rotl - swaps the top two elements of the stack.
 *@head: Pointer pointer to the head of a doubly linked list.
 *@line_number: line
 **/

void _rotl(stack_t **head, unsigned int __attribute__((unused)) line_number)
{
	stack_t *aux = *head;
	int num = 0;

	if ((*head)->next != NULL)
	{
		while ((*head)->next != NULL)
		{
			num = (*head)->n;
			*head = (*head)->next;
			(*head)->prev->n = (*head)->n;
			(*head)->n = num;
		}
	}
	*head = aux;
}
