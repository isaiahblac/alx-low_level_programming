#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int i, sum = 0;
	int j = 1024;

	for (i = 0; i < j; i++)
	{
		if ((i % 5) == 0 || (i % 3) == 0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);
	return (0);
}
