#include <stdio.h>
#include "monty.h"
#include <stdlib.h>

/**
 * pstr - Output the contents of a stack_t stack as a string.
 * @stack: stack given by main
 * @row_cnt: Line counter used for error messages.
 *
 * Return: nothing
 */


void pstr(unsigned int row_cnt __attribute__((unused)), stack_t **stack)
{

	stack_t *current = *stack;


	while (current)
	{

		if (current->n > 127 || current->n <= 0)
			break;

		current = current->next;
		putchar((char) current->n);


	}

	putchar('\n');
}
