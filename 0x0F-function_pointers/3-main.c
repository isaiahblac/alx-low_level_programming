#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - performs simple math operation
 * @argc: counts array
 * @argv: array content
 * Return: returns a series instruction
 */

int main(int argc, char *argv[])
{
	int (*callfunc)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	callfunc = get_op_func(argv[2]);
	if (callfunc == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", callfunc(atoi(argv[1]), atoi(argv[3])));
	return (0);

}
