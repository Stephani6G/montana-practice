#include "monty.h"
#include <stdio.h>
#define _GNU_SOURCE
#include <stdlib.h>

bus_t bus = {NULL, NULL, NULL, 0};

/**
* main - is the function for
* monty code interpreter,
* followed by a new line.
*
* @argc: is the argument count
* @argv: is the argument value
*
* Return: 0 (if it is successful)
*
*/

int main(int argc, char *argv[])
{
	char *content;
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	stack_t *stack = NULL;
	unsigned int counter = 0;


	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.filem = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		content = NULL;
		read_line = getline(&content, &size, file);
		bus.content = content;
		counter++;
		if (read_line > 0)
		{
			execl(content, &stack, counter, file);
		}
		free(content);
	}
	frees_stack(stack);
	fclose(file);
return (0);
}
