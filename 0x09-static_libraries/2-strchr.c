#include "main.h"
#include <stdio.h>

/**
 * _strchr - return a string to the first occurence of a character
 * @s: pointer to the string
 * @c: character to find
 * Return: string or null
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}

