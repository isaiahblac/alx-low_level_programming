#include "main.h"

/**
 * leet - encodes string
 * @b: string to be encoded
 * Return: b
 */

char *leet(char *b)
{
	int i;
	int j;
	char *let = "aAeEoOtTlL";
	char *rep = "4433007711";

	for (i = 0 ; b[i] != '\0' ; i++)
	{
	for (j = 0 ; j < 10 ; j++)
	{
		if (b[i] == let[j])
			b[i] = rep[j];
	}
	}
	return (b);
}
