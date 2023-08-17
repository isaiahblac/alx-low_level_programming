#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: separate numbers
 * @n: number of variables
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(numbers, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(numbers);

	putchar('\n');
}
