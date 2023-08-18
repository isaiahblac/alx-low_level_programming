#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

void print_int(va_list arg);
void print_float(va_list arg);
void print_char(va_list arg);
void print_str(va_list arg);

/**
 * struct printTypeStruct - structure define printTypeStruct
 * @type: type of arg
 * @printer: pointer to function
 */
typedef struct printTypeStruct
{
char *type;
void (*printer)(va_list);
} printTypeStruct;



#endif
