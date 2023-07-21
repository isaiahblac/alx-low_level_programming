#include "main.h"

/**
 * print_triangle - printing a triangle with '#'
 * @size: Size of triangle
 */

void print_triangle(int size)
{
	int d, e, j;

	d = 0;
	e = size - 1;
	while (d < size)
	{
		e = size - 1 - d;
		j = d + 1;
		while (e > 0)
		{
			_putchar(32);
			e--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar(10);
		d++;
	}

	if (size <= 0)
		_putchar(10);
}
