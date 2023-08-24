#include <stdio.h>
#include "monty.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * @stack: stack given by hand
 * @row_cnt: Row counter
 * e_add -  add the first two nodes of the stack
 *
 * Return: void
 */
void e_add(stack_t **stack, unsigned int row_cnt)
{

	int val;

	if (!((*stack)->next) || !stack || !*stack)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", row_cnt);
		exit(EXIT_FAILURE);
	}


	val = ((*stack)->next->n) + ((*stack)->n);

	pop(stack, row_cnt); /*For the top node*/
	(*stack)->n = val;
}
