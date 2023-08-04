#include <stdio.h>

/**
 * main - prints arguement arguement passed to it
 * @argc: arguement counter
 * @argv: arguement array of strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0 ; i < argc ; i++)
		printf("%s\n", argv[i]);
	return (0);
}
