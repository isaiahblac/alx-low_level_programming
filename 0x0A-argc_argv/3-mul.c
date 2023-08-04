#include <stdio.h>
#include <stdlib.h>


/**
 * main - multiplies two numbers
 * @argc: arguement counter
 * @argv: arguement array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, j, res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		res = i * j;
		printf("%d\n", res);
	}
	return (0);
}

