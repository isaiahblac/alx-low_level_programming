#include "main.h"

/**
 * string_toupper - converts strings to upper case
 * @b: pointer to variables
 * Return: char
 */

char *string_toupper(char *b)
{
	int i;

	for (i = 0 ; b[i] != '\0' ; i++)
	{
		if (b[i] >= 97 && b[i] <= 122)
		{
			b[i] = b[i] - 32;
		}
	}
	return (b);
}
