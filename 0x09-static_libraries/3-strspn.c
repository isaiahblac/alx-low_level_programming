#include "main.h"

/**
 *  _strspn - returns number of byte from s that
 *  consist only byte from accept
 *  @s: ponter to string s
 *  @accept: byte to compare
 *  Return:unsigned int
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int k;

	for (i = 0 ; s[i] != '\0' ; i++)
	{
		for (k = 0 ; accept[k] != s[i] ; k++)
		{
			if (accept[k] == '\0')
				return (i);
		}
	}
	return (0);
}
