#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: the base
 * @y: the exponent
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
		res = x * _pow_recursion(x, y - 1);
	return (res);
}


