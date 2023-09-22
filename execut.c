#include "monty.h"

/**
* _execute - A function that
* executes opcode
* @stack_h: head of linked list
* @count: counter of lines
* @file: pointer
* @line: content of line
* Return: integer
*/
int _execute(char *line, stack_st **stack_h, unsigned int count, FILE *file)
{
	unsigned int i = 0;
	char *op;
	stack_instruct_t opst[] = {
				{"push", f_push}, {"pall", f_pall}, {"pint", f_pint},
				{"pop", f_pop},
				{"swap", f_swap},
				{"add", f_add},
				{"nop", f_nop},
				{"sub", f_sub},
				{"div", f_div},
				{"mul", f_mul},
				{"mod", f_mod},
				{"pchar", f_pchar},
				{"pstr", f_pstr},
				{"rotl", f_rotl},
				{"rotr", f_rotr},
				{"queue", f_queue},
				{"stack", f_stack},
				{NULL, NULL}
				};
	op = strtok(line, " \n\t");
	if (op && op[0] == '#')
		return (0);
	info.argm = strtok(NULL, " \n\t");
	while (opst[i].op_code && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack_h, count);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", count, op);
		fclose(file);
		free(line);
		free_stack(*stack_h);
		exit(EXIT_FAILURE); }
	return (1);
}
