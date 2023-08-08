#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: strings to merge
 * @s2: string to merge
 * Return: return newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	int counts1 = 0;
	int counts2 = 0;
	char *strings;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		counts1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		counts2++;
	strings = malloc(sizeof(char) * (counts1 + counts2) + 1);
	if (strings == NULL)
		return (NULL);
	for (i = 0 ; s1[i] != '\0' ; i++)
		strings[i] = s1[i];
	for (i = 0 ; s2[i] != '\0' ; i++)
		strings[counts1 + i] = s2[i];
	return (strings);
}
