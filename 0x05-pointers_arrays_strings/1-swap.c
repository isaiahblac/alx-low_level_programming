#include "main.h"

/**
 * swap_int - swaps the valuew of two integers
 * @a: int variable
 * @b: int variable
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
