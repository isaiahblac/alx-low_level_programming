#include "lists.h"

/**
 * print_list - prints the elements in a linked list
 * @h: pointer to the list
 * Return: num nodes
 */

size_t print_list(const list_t *h)
{
	size_t numnodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
