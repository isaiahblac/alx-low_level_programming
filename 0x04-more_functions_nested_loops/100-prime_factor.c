#include <stdio.h>
#include <math.h>

/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int i;
	long j = 612852475143;

	for (i = (int) sqrt(j); i > 2; i++)
	{
		if (j % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
