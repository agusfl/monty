#include "monty.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: pointer to the beginning of the list
 * @n: value to add at the beginning of the list.
 * Return: 0 on success, or 2 if it failed.
 */

int add_dnodeint(stack_t **head, int n)
{
	stack_t *new_node = NULL;

	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error: malloc failed\n");
		return (2);
	}
	new_node->n = n;
	if (*head == NULL) /* Si la lista esta vacia */
	{
		*head = new_node;
		new_node->next = NULL;
		new_node->prev = NULL;
		return (0);
	}
	/* Insertar nuevo nodo al inicio */
	new_node->next = *head;
	(*head)->prev = new_node;
	*head = new_node;
	new_node->prev = NULL;
	return (0);
}

/**
 * del_end_node - deletes node at beginning of the list.
 * @head: pointer to head of the list.
 */

void del_end_node(stack_t **head)
{
	stack_t *del_node = NULL;

	del_node = *head;
	if ((*head)->next == NULL) /* Chequear si hay solo un nodo en la lista */
	{
		*head = NULL;
		free(del_node);
	}
	else
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		free(del_node);
	}
}

/**
 * free_doubly_ll - frees a doubly linked list with int values.
 * @head: pointer to head of the list
 */

void free_doubly_ll(stack_t **head)
{
	stack_t *tmp = NULL;

	if (head == NULL) /*lista vacia - no existe */
		return;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
}
