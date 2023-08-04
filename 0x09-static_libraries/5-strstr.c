#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locates needle in haystack
 * @haystack: pointer to the substring to search in
 * @needle: pointer to the substing to locate
 * Return: char found
 */

char *_strstr(char *haystack, char *needle)
{
	int a;
	int b;

	for (a = 0 ; haystack[a] != '\0' ; a++)
	{
		for (b = 0 ; needle[b] != '\0' && haystack[a + b] == needle[b] ; b++)
		{
			if (needle[b] != '\0')
				return (&haystack[a]);
		}
	}
	return (NULL);
}

