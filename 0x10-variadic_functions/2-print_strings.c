#include "variadic_functions.h"

/**
 * print_strings - prints strings followed by a new line
 * @separator: separete strings
 * @n: number of unknown arguments
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;

	unsigned int i;
	char *a;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		a = va_arg(strings, char*);
		if (a != NULL)
			printf("%s", a);
		else
			printf("(nil)");

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	va_end(strings);
	putchar('\n');
}
