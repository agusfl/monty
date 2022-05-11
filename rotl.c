#include "monty.h"

/**
 *_rotl - swaps the top two elements of the stack.
 *@head: Pointer pointer to the head of a doubly linked list.
 *@line_number: line
 **/

void _rotl(stack_t **head, unsigned int line_number)
{
	int num = 0;
	stack_t *aux = *head;

	line_number += 1;
	line_number -= 1;
	if (*head == NULL || (*head)->next == NULL)
	{
		exit(EXIT_FAILURE);
	}
	while ((*head)->next != NULL)
	{
		num = (*head)->n;
		*head = (*head)->next;
		(*head)->prev->n = (*head)->n;
		(*head)->n = num;
	}
	*head = aux;
}
