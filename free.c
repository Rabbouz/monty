#include "monty.h"
/**
* free_stack - freeying doubly l
* @stack_h: head
*/
void free_stack(stack_st *stack_h)
{

	while (stack_h)
	{
		stack_st *next = stack_h->next;

		free(stack_h);

		stack_h = next;
	}
}
