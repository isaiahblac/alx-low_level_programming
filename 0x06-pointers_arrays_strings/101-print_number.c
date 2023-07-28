#include "main.h"

/**
 * print_number - prints an integer
 * @n: int
 * Return: void
 */

void print_number(int n)
{
	int divisor;
	int sign;

	divisor = 1000000000;
	sign = 1;
	if (n > 0)
	{
		n = n * -1;
		sign = sign * -1;
	}
	if (n != 0)
	{
		while (n / divisor == 0)
			divisor = divisor / 10;
		if (sign == 1)
			_putchar('-');
		while (divisor >= 1)
		{
			_putchar(-(n / divisor) + '0');
			n = n % divisor;
			divisor = divisor / 10;
		}
	}
	else
		_putchar('0');
}
