#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stddef.h>


#define INSTRUCTIONS              \
	{                           \
		    {"push", push},       \
			{"add", _add},    \
		    {"sub", _sub},    \
		    {"pall", pall},   \
		    {"pint", pint},   \
		    {"pop", pop},     \
		    {"swap", swap},   \
			{"mod", mod},     \
		    {"pchar", pchar}, \
		    {"pstr", pstr},   \
		    {"rotl", rotl},   \
		    {"rotr", rotr},   \
		    {"nop", nop},     \
		    {"div", _div},    \
		    {"mul", _mul},    \
		   
		    
		{                     \
			NULL, NULL      \
		}                     \
	}

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
* struct help - argument for the current opcode
* @data_struct: stack mode, stack (default) and queue
* @argument: the arguments of the string
*
* Description: Universal framework for conveniently transferring data among functions.
*/
typedef struct _help
{

	char *argument;
	int data_struct;
	
} _help;

_help global;


/* available stack utility functions in linked_list.c */

stack_t *add_node(stack_t **stack, const int n);
stack_t *queue_node(stack_t **stack, const int n);
void free_stack(stack_t *stack);
size_t print_stack(const stack_t *stack);

void opcode(stack_t **stack, char *str, unsigned int row_cnt);

void pchar(stack_t **stack, unsigned int row_cnt);
void pstr(stack_t **stack, unsigned int row_cnt);
void rotl(stack_t **stack, unsigned int row_cnt);
void rotr(stack_t **stack, unsigned int row_cnt);



void push(stack_t **stack, unsigned int row_cnt);
void pall(stack_t **stack, unsigned int row_cnt);
void pint(stack_t **stack, unsigned int row_cnt);
void swap(stack_t **stack, unsigned int row_cnt);
void pop(stack_t **stack, unsigned int row_cnt);
void nop(stack_t **stack, unsigned int row_cnt);

int is_digit(char *string);
int isnumber(char *str);


void e_div(stack_t **stack, unsigned int row_cnt);
void _add(stack_t **stack, unsigned int row_cnt);
void _sub(stack_t **stack, unsigned int row_cnt);
void _mul(stack_t **stack, unsigned int row_cnt);
void mod(stack_t **stack, unsigned int row_cnt);





#endif  /* MONTY_H */
