#include "main.h"

/**
 * rot13 - encodes a string with rot 13
 * @b: pointer to string to be encoded
 * Return: b
 */

char *rot13(char *b)
{
	int i;
	int j;
	char *let = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWQYZ";
	char *rot = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJDLM";

	for (i = 0 ; b[i] != '\0' ; i++)
	{
		for (j = 0 ; let[j] != '\0' ; j++)
		{
			if (b[i] == let[j])
			{
				b[i] = rot[j];
				break;
			}
		}
	}
	return (b);
}
