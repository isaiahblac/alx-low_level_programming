#include "main.h"

/**
 * _isupper - checks for upper case letters
 * @c:integer that receives test
 * Return: 0 always
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
