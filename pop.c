#include "monty.h"

/**
 * pop_f - A function that prints the top
 * @stack_h: head
 * @count: line counter
 * Return: void
*/

void pop_f(stack_st **stack_h, unsigned int count)
{
	stack_st *head;
	FILE *file;
	char *line = NULL;

	if (*stack_h == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(file);
		free(line);
		free_stack(*stack_h);
		exit(EXIT_FAILURE);
	}
	head = *stack_h;
	*stack_h = head->next;
	free(head);
}
