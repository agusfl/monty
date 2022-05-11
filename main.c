#include "monty.h"

/**
 *main - monty interpreter
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0 on success or EXIT_FAILURE on failure.
 **/

int main(int argc, char *argv[])
{
	int fd = 0, buf_read = 0, size_buf = 11000;
	char *token = NULL;
	unsigned int line_number = 1;
	stack_t *head = NULL;

	if (argc != 2)
	{
		dprintf(2, "USAGE: monty file\n"); /* print on standar error (is the 2 fd) */
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1) /* Si fd es igual a -1 es porque hubo un error */
	{
		dprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	buf = _calloc(sizeof(char), size_buf); /*usamos calloc para inicializar en 0*/
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	buf_read = read(fd, buf, size_buf);
	if (buf_read == -1) /* Si da -1 es porque hubo un error */
	{
		free(buf);
		close(fd);
		exit(EXIT_FAILURE);
	}
	token = strtok(buf, "\n\t$ "); /*tokenizamos */
	while (token != NULL)
	{
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, "\n\t$ ");
			push(&head, line_number, token);
		}
		else if (get_op_func(token) != NULL) /*llamada a getopfunc si es dist NULL*/
		{
			get_op_func(token)(&head, line_number);
		}
		else /* else si la funcion no esta definida en get op func */
		{
			free_doubly_ll(&head);
			dprintf(2, "L%u: unknown instruction %s\n", line_number, token);
			exit(EXIT_FAILURE);
		}
		line_number++;
		token = strtok(NULL, "\n\t$ ");
	}
	free_doubly_ll(&head), free(buf);
	close(fd);
	return (0);
}
