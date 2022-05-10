#ifndef MONTY_H
#define MONTY_H

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <ctype.h>
#include <fcntl.h>

/* Structures */
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/* Main function Prototypes */

void (*get_op_func(char *token_op))(stack_t **stack, unsigned int line_number);
int add_dnodeint(stack_t **head, int n);
void del_end_node(stack_t **head);
void push(stack_t **head, unsigned int line_number, char *num_str);
void pall(stack_t **head, unsigned int line_number);

/* Auxiliar functions */

void *_calloc(unsigned int nmemb, unsigned int size);
int check_number(char *str);
void free_doubly_ll(stack_t **head);

#endif
