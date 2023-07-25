#include "main.h"
#include <stdio.h>

/**
 * print_array - prints a number of array
 * @a: pointer to the variables
 * @n: numbers of arrays printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}
