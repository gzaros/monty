#include <stdio.h>
#include "monty.h"
#include <stdlib.h>
#include <string.h>

/**
 * swap - Exchanges data between the top and the previous element.
 * @stack: stack given by main
 * @row_cnt: Row counter
 *
 * Return: void
 */

void swap(stack_t **stack, unsigned int row_cnt)
{

	stack_t *tmp = NULL;
	int tmp_n = 0;


	if (!((*stack)->next) || !stack || !*stack)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", row_cnt);
		exit(EXIT_FAILURE);

	}


	tmp = *stack;
	tmp_n = tmp->n;
	tmp->n = tmp_n;

	tmp->n = tmp->next->n;
	tmp->next->n = tmp_n;

}
