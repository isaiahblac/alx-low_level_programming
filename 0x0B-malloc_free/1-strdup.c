#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space
 * @str: contain string to copy
 * Return: returns pointer to duplicate string
 */

char *_strdup(char *str)
{
	char *dup;
	int strlen = 0;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		strlen++;

	dup = malloc(sizeof(char) * strlen + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0 ; str[i] != '\0' ; i++)
		dup[i] = str[i];
	return (dup);
}
