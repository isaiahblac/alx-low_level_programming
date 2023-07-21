#include "main.h"

void print_integer(int m);
/**
 * print_number - a function that prints an integer.
 * @n: An input integer
 * Return: void
 */

void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		print_integer(n * -1);
	}
	else
		print_integer(n);
}

/**
 * print_integer - A function for printing n
 * @m: an input unsigned integer
 * Return: Nothing
 */
void print_integer(int m)
{
	unsigned int k = 1000000000;

	for (; k >= 1; k /= 10)
		if (m / k != 0)
		{
			_putchar((m / k) % 10 + '0');
		}
}
