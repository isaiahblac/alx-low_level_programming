#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a sting for any set of byte
 * @s: pointer to the string to search
 * @accept: pointer to the string to compare
 * Return: char
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (j = 0 ; accept[j] != '\0' ; j++)
		{
		if (s[i] == accept[j])
		{
			return (&s[i]);
		}
		}
	}
	return (NULL);
}
