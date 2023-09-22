#include "monty.h"
/**
 * push_f - A function that adds
 * node to stack
 * @stack_h: the head
 * @count: line counter
 * Return: void
*/

void push_f(stack_st **stack_h, unsigned int count)
{
	int n = 0;
	int w = 0;
	int fl = 0;
	FILE *file;
	char *line = NULL;

	if (info.argm)
	{
		if (info.argm[0] == '-')
			w++;
		for (; info.argm[w] != '\0'; w++)
		{
			if (info.argm[w] > 57 || info.argm[w] < 48)
				fl = 1; }
		if (fl == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", count);
			fclose(file);
			free(line);
			free_stack(*stack_h);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", count);
		fclose(file);
		free(line);
		free_stack(*stack_h);
		exit(EXIT_FAILURE); }
	n = atoi(info.argm);
	if (info.lifi == 0)
		addnode(stack_h, n);
	else
		addqueue(stack_h, n);
}
