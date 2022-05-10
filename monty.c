#include "monty.h"
/**
 *main - monty interpreter
 *@argc: argument counter
 *@argv: argument vector
 *Return: 0 on success or other number if it failes.
 **/
int main(int argc, char *argv[])
{
	int fd = 0, buf_read = 0, size_buf = 6000;
	char *buf = NULL, *token = NULL;
	int iter = 0;

	if (argc != 2)
	{
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		printf("Error: Can't open file %s", argv[1]);
		exit(EXIT_FAILURE);
	}
	buf = malloc(size_buf);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	buf_read = read(fd, buf, size_buf);
	if (buf_read == -1)
	{
		free(buf);
		close(fd);
		exit(EXIT_FAILURE);
	}
	token = strtok(buf,"\n\t ")
	while (token != NULL)
	{

	}
	return (0);
}
