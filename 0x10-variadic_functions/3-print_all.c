#include "variadic_functions.h"

/**
 * print_int - prints int
 * @arg: arg to print
 */

void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}

/**
 * print_float - prints float
 * @arg: arg to print
 */
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * print_char - prints char
 * @arg: arg
 */
void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * print_str - prints string
 * @arg: arg
 */
void print_str(va_list arg)
{
	char *s = va_arg(arg, char *);

	s == NULL ? printf("(nil)") : printf("%s", s);
}

/**
 * print_all - prints all types
 * @format: arguments
 */

void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	int j = 0;
	char *sep = "";

printTypeStruct printType[] = {
	{ "i", print_int },
	{ "f", print_float },
	{ "c", print_char },
	{ "s", print_str },
	{NULL, NULL}
};


va_start(arg, format);

while (format && format[i])
{
	j = 0;
	while (j < 4)
	{
		if (*printType[j].type == format[i])
		{
			printf("%s", sep);
			printType[j].printer(arg);
			sep = ", ";
			break;
		}
		j++;
	}
	i++;
}

printf("\n");
va_end(arg);
}
