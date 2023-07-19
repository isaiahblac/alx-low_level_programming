#include "main.h"

/**
 *_isalpha - chechs for both upper and low case alphabet
 * @c: character for check
 * Return: (0) when false and (1) if true
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

