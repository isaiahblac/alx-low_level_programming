#include "lists.h"
#include <stdio.h>

/**
 * list_len -  returns the number of elements in a linked list_t list.
 * @h: pointer linked list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t numnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
