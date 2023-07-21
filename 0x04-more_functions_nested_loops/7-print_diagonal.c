#include "main.h"

/**
 * print_diagonal - prints diagonals in form of '\'
 * @n: number of times diagonals '\' is printed
 * Return: void
 */

void print_diagonal(int n)
{

	if (n <= 0)
		_putchar('\n');
	else
	{
		int k, l;

		for (k = 0 ; k < n ; k++)
		{
			for (l = 0 ; l <= k ; l++)
				_putchar(' ');
			_putchar('\\');
		_putchar('\n');
		}
	}

}
