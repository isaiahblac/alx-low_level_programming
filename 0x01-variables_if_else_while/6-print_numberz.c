#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 when false
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
