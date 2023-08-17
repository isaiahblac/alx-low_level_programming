#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * op_add - add num1 and num2
 * @a: num1
 * @b: num2
 * Return: sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts num1 from num2
 * @a: num1
 * @b: num2
 * Return: subtraction result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies num1 and num2
 * @a: num1
 * @b: num2
 * Return: product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides num1 with num2
 * @a: num1
 * @b: num2
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - divides num1 by num2 and return the remainder
 * @a: num1
 * @b: num2
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
