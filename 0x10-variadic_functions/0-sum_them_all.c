#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: number of parameters
 * Return: sum of numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;
	int sum = 0;

	va_start(numbers, n);
	if (n == 0)
		return (0);
	for (i = 0 ; i < n ; i++)
		sum = sum + va_arg(numbers, unsigned int);
	va_end(numbers);
	return (sum);

}
