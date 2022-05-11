#include "monty.h"

/**
 * pop - removes the top element of the stack.
 * @head: Pointer pointer to the head of a doubly linked list.
 * @line_number: bytecode line number
 */
extern char * buf;
void pop(stack_t **head, unsigned int line_number)
{
	if (head == NULL || *head == NULL)
	{
		dprintf(2, "L%u: can't pop an empty stack\n", line_number);
		free_doubly_ll(head);
		free(buf);
		exit(EXIT_FAILURE);
	}
	else
		del_node(head);
}
