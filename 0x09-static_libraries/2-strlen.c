#include "main.h"

/**
 * _strlen -  returns the lenght of a string.
 * @s: char variable
 * Return: string length.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
