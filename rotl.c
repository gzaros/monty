#include "monty.h"

/**
* rotl - Rotates the first element of the stack.
* @stack: stack head
* @row_count: line count
*
* Return: void
*/
void rotl(unsigned int row_count, stack_t **stack)
{

	(void) row_count;

	stack_t *right;

	stack_t *left;





	if (!(*stack)->next || !stack || !*stack)
		return;

	left = right = *stack;

	while (right->next)
		right = right->next;


	right->next = left;
	left->prev = right;

	*stack = left->next;

	(*stack)->prev->next = NULL;
	(*stack)->prev = NULL;
}
