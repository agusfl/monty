#include "monty.h"

/**
 * get_op_func - select correct function
 * @token_op: First bytecode input
 * Return: pointer to the correct function
 */

void (*get_op_func(char *token_op))(stack_t **stack, unsigned int line_number)
{
	instruction_t opcodes[] = {
		{"push", push},
		/*{"pop", pop},
		{"pall", pall},
		{"pint", pint},
		{"swap", swap},
		{"add", _add},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{"mod", _mod},
		{"pchar", pchar},
		{"pstr", pstr},
		{"nop", nop},
		{"rotl", rotl},
		{"rotr", rotr},*/
		{NULL, NULL}
	};
	int i = 0;

	while (opcodes[i].opcode != NULL)
	{
		if (strcmp(token_op, opcodes[i].opcode) == 0)
			return (opcodes[i].f);
		i++;
	}
	return (NULL);
}