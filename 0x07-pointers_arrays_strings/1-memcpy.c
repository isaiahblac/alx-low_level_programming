#include "main.h"

/**
 * _memcpy - copies byte from memory area src to dest
 * @dest: destination of byte
 * @src: source of byte
 * @n: number of byte
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);

}
