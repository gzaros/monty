#include <stdio.h>
#include "monty.h"
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * @stack: stack given by hand
 * e_mul - divides the next higher value by the upper value
 * @row_cnt: Row counter
 *
 * Return: void
 */
void e_mul(stack_t **stack, unsigned int row_cnt)
{

	int val;
	
	if (!((*stack)->next) || !stack || !*stack )		
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", row_cnt);
		exit(EXIT_FAILURE);
		return;
	}

	val = ((*stack)->next->n) * ((*stack)->n);

	pop(stack, row_cnt); /*For the top node*/

	(*stack)->n = val;
}


