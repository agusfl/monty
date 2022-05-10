#include "monty.h"
/**
 *swap - swaps the top two elements of the stack.
 *@head: Pointer pointer to the head of a doubly linked list.
 *@line_number: bytecode line number
 **/
void swap(stack_t **head, unsigned int line_number)
{
	stack_t *aux = *head;

	if (*head == NULL || (*head)->next == NULL)
	{
		printf("L%u: can't swap, stack too", line_number);
		exit(EXIT_FAILURE);
	}

	*head = (*head)->next;
	aux->next = (*head)->next;
	(*head)->next->prev = aux;
	(*head)->next = aux;
	aux->prev = *head;
	(*head)->prev = NULL;
}

