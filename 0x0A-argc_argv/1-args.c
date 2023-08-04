#include <stdio.h>

/**
 * main - prints the number of arguement
 * @argc: arguement counter
 * @argv: arguement array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
