#include "main.h"

/**
 *  *_strcpy - to copy string
 *  @dest: location copied to
 *  @src: location copied from
 *  Return: character which in this case is dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] != '\0' ; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
