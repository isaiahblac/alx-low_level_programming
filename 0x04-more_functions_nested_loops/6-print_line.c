#include "main.h"

/**
 * print_line - prints a  new line
 * @n: no of times the new line is printed
 * Return: void
 */

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
	int k;

	for (k = 1 ; k <= n ; k++)
		_putchar('_');
	_putchar('\n');
	}
}
