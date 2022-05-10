#include "monty.h"

/**
 * push - adds node to the start of a doubly linked list.
 * @head: head of a doubly linked list.
 * @line_number: bytecode line number
 * @num_str: string to check for integers
 */

void push(stack_t **head, unsigned int line_number, char *num_str)
{
	if (head == NULL)
		return;
	if (check_number(num_str) == 2)
	{
		printf("L%u: usage: push integer\n", line_number);
		free_doubly_ll(head);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (add_dnodeint(head, atoi(num_str)) == 2)
		{
			free_doubly_ll(head);
			exit(EXIT_FAILURE);
		}
	}
}
