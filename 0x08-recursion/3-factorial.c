#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: the number
 * Return: factorial value
 */

int factorial(int n)
{
	int res;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
		res = n * factorial(n - 1);
	return (res);

}
