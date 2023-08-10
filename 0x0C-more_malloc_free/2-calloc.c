#include "main.h"

/**
 * _calloc - allocates memory of an array
 * @nmemb: memner of an array
 * @size: size allocated
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);
	call = calloc(nmemb, size);
	if (call == 0)
		return (NULL);
	else
		return (call);
}
