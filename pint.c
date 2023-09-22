#include "monty.h"

/**
 * f_pint - A function that prints top of stack
 * @stack_h: head
 * @count: line counter
 * Return: void
*/

void f_pint(stack_st **stack_h, unsigned int count)
{
	FILE *file;
	char *line = NULL;

	if (*stack_h == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(file);
		free(line);
		free_stack(*stack_h);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack_h)->num);
}
