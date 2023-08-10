#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: number of byte
 * Return: return pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *string;
	unsigned int counts1 = 0;
	unsigned int counts2 = 0;
	unsigned int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0 ; s1[i] != '\0' ; i++)
		counts1++;
	for (i = 0 ; s2[i] != '\0' ; i++)
		counts2++;
	string = malloc(sizeof(char) * (counts1 + n) + 1);
	if (string == NULL)
		return (NULL);
	if (n >= counts2)
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			string[i] = s1[i];
		for (i = 0 ; s2[i] != '\0' ; i++)
			string[counts1 + i] = s2[i];
		string[counts1 + i] = '\0';
	}
	else
	{
		for (i = 0 ; s1[i] != '\0' ; i++)
			string[i] = s1[i];
		for (i = 0 ; i < n ; i++)
			string[counts1 + i] = s2[i];
		string[counts1 + i] = '\0';
	}

		return (string);

}
