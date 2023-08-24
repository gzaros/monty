#include <stdio.h>
#include <string.h>
#include "./monty.h"
#include <stdlib.h>

/**
 * @str: compare string
 * @row_cnt: Row counter
 * _opcode - function responsible for executing the built-in elements
 * @stack: stack given by main
 *
 * Return: nothing
 */
void _opcode(stack_t **stack, char *str, unsigned int row_cnt)
{

	instruction_t op[] = INSTRUCTIONS;
	int cnt = 0;



	if (!strcmp(str, "stack"))
	{

		global.data_struct = 1;

		return;

	}


	if (!strcmp(str, "queue"))
	{

		// if not equal str
		global.data_struct = 0;

		return;

	}

	while (op[cnt].opcode)
	{

		if (strcmp(op[cnt].opcode, str) == 0)
		{

			op[cnt].f(stack, row_cnt);

			return;  /* In case of a match being found, execute the function. */
		}

		cnt++;
	}


	fprintf(stderr, "L%d: unknown instruction %s\n", row_cnt, str);

	exit(EXIT_FAILURE);
}
