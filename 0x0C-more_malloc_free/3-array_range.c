#include "main.h"

/**
 * array_range - create array of integers
 * @min: minimum values
 * @max: maximum values
 * Return: to the new array
 */

int *array_range(int min, int max)
{
	int *arr;
	int i;
	int size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
		arr[i] = min + i;
	return (arr);

}
