#include "monty.h"

#define MAX_LINE_LENGTH 1024

/**
* main - monty code interpreter
* @argc: arguments
* @argv: file locations
* Return: Always 0 (success)
*/

int main(int argc, char *argv[])
{
	int count = 0;
	size_t size = 0;
	char *line = NULL;
	stack_st *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	FILE *file = fopen(argv[1], "r");

	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((line = fgets(line, sizeof(line), file)) != NULL)
		{
			count++;
			execute(line, &stack, count, file);

			free(line);
			line = NULL;
		}
	free_stack(stack);
	fclose(file);
	return (0);
}
