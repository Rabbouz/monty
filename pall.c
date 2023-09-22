#include "monty.h"

/**
 * pall_f - A function that prints the stack
 * @stack_h: head
 * @count: counter
 * Return: void
*/

void pall_f(stack_st **stack_h, unsigned int count)
{
	stack_st *head;
	(void)count;

	head = *stack_h;
	if (head == NULL)
		return;
	while (head)
	{
		printf("%d\n", head->num);
		head = head->next;
	}
}
