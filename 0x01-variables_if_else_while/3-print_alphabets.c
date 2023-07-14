#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 when false
 */
int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		putchar(i);
	for (i = 'A';  i <= 'Z' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
