#include "main.h"

/**
 * _strcat - joins string to string
 * @dest: destinatination string
 * @src: source string
 * Return: char(dest)
 */

char *_strcat(char *dest, char *src)
{
	int dlength = 0;
	int slength = 0;
	int i;

	for (i = 0 ; dest[i] != '\0' ; i++)
		dlength++;
	for (i = 0 ; src[i] != '\0' ; i++)
		slength++;
	for (i = 0 ; i <= slength ; i++)
		dest[dlength + i] = src[i];
	return (dest);
}
