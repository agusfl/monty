#include "monty.h"

/**
 * pstr - print the string starting at the top of the stack.
 * @head: pointer pointer to the head of a list.
 * @line_number: bytecode line number.
 */

void pstr(stack_t **head, unsigned int __attribute__((unused)) line_number)
{
	stack_t *aux = *head;

	while (aux->n != 0 && aux != NULL && aux->n >= 0 && aux->n <= 127)
	{
		printf("%c", aux->n); /*usamos el %c para imprimir los num como caracter*/
		aux = aux->next;
	}
	printf("\n"); /* printeamos el salto de linea despues del string */

}
