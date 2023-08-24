#define  _POSIX_C_SOURCE 200809L
#include "monty.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void file_error(char *argv);
void error_usage(void);
int status = 0;



/**
 * error_usage - Displays a usage message and terminates.
 * a single argument to your program
 *
 * Return: nothing
 */
void error_usage(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	exit(EXIT_FAILURE);
}


/**
 * file_error - Displays a file error message and terminates.
 * @argv: Command-line arguments provided by the main() function.
 *
 * Desc: Print a message if it's not possible to open the file.
 * Return: nothing
 */

void file_error(char *argv)
{
	fprintf(stderr, "Error: Can't open file %s\n", argv);
	exit(EXIT_FAILURE);
}

/**
 * main - Starting point.
 * @argv: Array of arguments supplied to our program.
 * @argc: Number of arguments.
 *
 * Return: nothing
 */
int main(char **argv, int argc)
{
	FILE *file;

	stack_t *stack = NULL;
	unsigned int row_cnt = 1;

	size_t buf_len = 0;
	char *buffer = NULL;
	char *str = NULL;



	global.data_struct = 1;
	if (argc != 2)
		error_usage();

	file = fopen(argv[1], "r");

	if (!file)
		file_error(argv[1]);



	while ((getline(&buffer, &buf_len, file)) != (-1))
	{

		if (status)
			break;
		if (*buffer == '\n')
		{
			row_cnt++;
			continue;
		}
		str = strtok(buffer, " \t\n");
		if (!str || *str == '#')
		{
			row_cnt++;
			continue;
		}
		global.argument = strtok(NULL, " \t\n");
		opcode(&stack, str, row_cnt);
		row_cnt++;

	}


	free(buffer);
	free_stack(stack);
	fclose(file);

	exit(EXIT_SUCCESS);
}
