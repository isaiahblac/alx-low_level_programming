#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 when false
 */
int main(void)
{
	int i;
	int k;

	for (i = 0 ; i < 10 ; i++)
	{
		for (k = i + 1 ; k < 10 ; k++)
		{
			putchar(i + '0');
			putchar(k + '0');
		if (i != 8 || k != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
		putchar('\n');
		return (0);
}
