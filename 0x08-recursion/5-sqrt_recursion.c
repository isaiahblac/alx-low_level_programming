#include "main.h"

/**
 * _sqrt_solver - solves the square root
 * @n: number
 * @c: iterations to check
 * Return: solved value
 */

int _sqrt_solver(int n, int c)
{
	if (c * c == n)
	{
		return (c);
	}
	if (c * c  > n)
	{
		return (-1);
	}
	else
		return (_sqrt_solver(n, c + 1));
}

/**
 * _sqrt_recursion - solves the recursion
 * @n: number considered
 * Return: int
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
		return (_sqrt_solver(n, 0));
}
