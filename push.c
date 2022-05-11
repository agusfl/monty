#include "monty.h"

/**
 * push - adds node to the start of a doubly linked list.
 * @head: head of a doubly linked list.
 * @line_number: bytecode line number
 * @num_str: string to check for integers
 */
extern char * buf;

void push(stack_t **head, unsigned int line_number, char *num_str)
{
	if (head == NULL)
		return;
	if (check_number(num_str) == 2)
	{
		dprintf(2, "L%u: usage: push integer\n", line_number);
		free_doubly_ll(head);
		free(buf);
		exit(EXIT_FAILURE);
	}
	else
	{
		if (add_dnodeint(head, atoi(num_str)) == 2)
		{
			free_doubly_ll(head);
			free(buf);
			exit(EXIT_FAILURE);
		}
	}
}
