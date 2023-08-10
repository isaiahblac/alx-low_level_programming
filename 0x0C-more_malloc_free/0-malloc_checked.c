#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	char *allo;

	allo = malloc(b);
	if (allo == NULL)
	exit(98);
	else
		return (allo);
}
