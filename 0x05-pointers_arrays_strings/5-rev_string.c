#include "main.h"

/**
 * rev_string -  reverses a string
 * @s: char pointer variable
 * Return: void
 */

void rev_string(char *s)
{
	int a, b;
	char c;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}

	b = a - 1;
	a = 0;
	while (a < b)
	{
		c = s[b];
		s[b] = s[a];
		s[a] = c;

		a++;
		b--;
	}
}
