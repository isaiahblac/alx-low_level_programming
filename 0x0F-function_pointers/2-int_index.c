#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to be considered
 * @cmp: ponter to the function to be used for comparison
 * @size: size of array
 * Return: int_index for match found and -1 for no match
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
		if (array == NULL || cmp == NULL)
			return (-1);
		if (size <= 0)
			return (-1);
		for (i = 0 ; i < size ; i++)
		{
			if (cmp(array[i]) == 1)
				return (i);
		}
		return (-1);
}
