#define _GNU_SOURCE
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * @row_cnt: Row counter
 * pchar - display the int at the top of the stack as a character
 * @stack: stack given by main
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int row_cnt)
{

	if (!(*stack) || !stack )
	{
		/* Can't pchar, stack empty */
		fprintf(stderr, "L%d: can't pchar, stack empty\n", row_cnt);

		return;

	}

	if (isascii((*stack)->n) == 0)
	{

		/* Can't pchar, value out of range */
		fprintf(stderr, "L%d: can't pchar, value out of range\n", row_cnt);

		return;

	}


	printf("%c\n", (*stack)->n);

}
