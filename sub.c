#include <stdio.h>
#include "monty.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * _sub -  Subtracts the values of the first two nodes in the stack.
 * @stack: stack given by hand
 * @row_cnt: Row counter
 *
 * Return: void
 */


void _sub(stack_t **stack, unsigned int row_cnt)
{
	int val;

	if (!((*stack)->next) || !stack || !*stack)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", row_cnt);

		exit(EXIT_FAILURE);
	}


	val = ((*stack)->next->n) - ((*stack)->n);

	pop(stack, row_cnt);

	(*stack)->n = val;
}
