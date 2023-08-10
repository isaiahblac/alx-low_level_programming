#include "main.h"

/**
 * _realloc - reallocates a memory block.
 * @ptr: previously allocated memory
 * @old_size:former size of allocated
 * @new_size: new size of allocated space
 * Return: returns pointer to newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *allo;
	unsigned int i;
	unsigned int newp = new_size;
	char *former = ptr;

	if (ptr == NULL)
	{
		allo = malloc(new_size);
		return (allo);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);

	allo = malloc(new_size);
	if (allo == NULL)
		return (NULL);
	if (new_size > old_size)
		newp = old_size;
	for (i = 0; i < newp; i++)
		allo[i] = former[i];
	free(ptr);
	return (allo);
}
