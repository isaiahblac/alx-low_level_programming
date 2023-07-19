#include "main.h"

/**
 * _islower - prints lower case character
 *
 * @c: character
 * Return: (0) when false
 */
int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
