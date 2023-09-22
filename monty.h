#ifndef MONTY_H
#define MONTY_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct main_stack - Creating a a stack of boubly linked list
 * @num: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 */

typedef struct main_stack
{
	int num;
	struct stack_s *prev;
	struct stack_s *next;
} stack_st;


/**
 * struct stack_info - Representation of argument and flag
 * @argm: argument
 * @lifi: flag changeer
 */
typedef struct info
{
	char *argm;
	int lifi;
}  stack_stt;
extern stack_stt info;



/**
 * struct stack_instruc - Representing the opcode
 * @op_code: opcode
 * @func: handling the opcode
 */
typedef struct stack_instruct_s
{
	char *opcode;
};
stack_instruct_t;


/*Prototypes*/
/*mendatory*/
void push_f(stack_st **stack_h, unsigned int count);
void f_pall(stack_st **head, unsigned int number);
void f_pint(stack_st **stack_h, unsigned int count);
void pop_f(stack_st **stack_h, unsigned int count);
void f_swap(stack_st **head, unsigned int counter);
void f_add(stack_st **head, unsigned int counter);
void f_nop(stack_st **head, unsigned int counter);
/*execution*/
int _execute(char *line, stack_st **stack_h, unsigned int count, FILE *file);
/*advenced*/
void free_stack(stack_st *stack_h);
void f_sub(stack_st **head, unsigned int counter);
void f_div(stack_st **head, unsigned int counter);
void f_mul(stack_st **head, unsigned int counter);
void f_mod(stack_st **head, unsigned int counter);
void f_pchar(stack_st **head, unsigned int counter);
void f_pstr(stack_st **head, unsigned int counter);
void f_rotl(stack_st **head, unsigned int counter);
void f_rotr(stack_st **head, __attribute__((unused)) unsigned int counter);
void addnode(stack_st **head, int n);
void addqueue(stack_st **head, int n);
void f_queue(stack_st **head, unsigned int counter);
void f_stack(stack_st **head, unsigned int counter);
/*tools*/
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **line_pointer, int file);
char  *clean_line(char *cont);
#endif
