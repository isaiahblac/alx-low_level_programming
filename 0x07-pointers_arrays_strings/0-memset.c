#include "main.h"

/**
 * _memset - fills the first memory area with constant byte
 * @n: number of byte to copy
 * @s: pointer to the memory area
 * @b: constant byte
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);

}
