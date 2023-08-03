#include "main.h"

/**
 * _divider - checks if divisor is prime
 * @n: the number being checked
 * @i: divisor
 * Return: int
 */

int _divider(int n, int i)
{
	if (i <= 1)
	{
		return (0);
	}
	if (i == 2)
	{
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
	}
	else if (n % i == 0)
		return (0);
	else
		return (_divider(n, i - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number checked
 * Return: int
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
		return (_divider(n, n - 1));
}








