#include "monty.h"
#include <ctype.h>


/**
 * is_digit - Verifies whether a string represents a digit.
 * @string: string to check
 *
 * Return: 0 if not , else success
 */

int is_digit(char *string)
{

	if (*string == '-')
		string++;

	if (*string == '\0' || !string)
		return (0);


	while (*string)
	{

		if (isdigit(*string) == 0)
			return (0);


		string++;

	}

	return (1);

}
/**
 * isnumber - Determines whether a string represents a numerical value.
 * @str: the given string
 *
 * Return: 0 if not , else success
 */


int isnumber(char *str)
{
	int cnt;

	if (!str)
		return (0);

	for (cnt = 0; str[cnt]; cnt++)
		if (cnt > '9' || cnt < '0')
			return (0);

	return (1);
}
