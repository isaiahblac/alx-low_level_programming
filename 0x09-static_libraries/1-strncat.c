#include "main.h"

/**
 * _strncat - joins string to string
 * @dest: destinatination string
 * @src: source string
 * @n: number of byte in src
 * Return: char(dest)
 */

char *_strncat(char *dest, char *src, int n)
{
	int dlength = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		dlength++;
	for (i = 0 ; i < n && *src != '\0' ; i++)
	{
		dest[dlength + i] = *src;
		src++;
	}
	return (dest);
}
