#include "main.h"

/**
 * print_last_digit - print the last number only
 * @i: integer character
 * Return: the last digit
 */

int print_last_digit(int i)
{
	int k;

	if (i >= 0)
	{
		k = (i % 10);
	}
	else
	{
		k = (-1 * (i % 10));
	}
	_putchar(k + '0');
	return (k);
}
