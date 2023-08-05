#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - A program that adds positive numbers
 * @argc: arguments counter
 * @argv: The argument arrays of strings
 * Return: return 1  for failure and 0 for success
 */

int main(int argc, char *argv[])
{
	int num, res = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		num = atoi(argv[i]);
		res += num;
	}
	printf("%d\n", res);
	return (0);
}
