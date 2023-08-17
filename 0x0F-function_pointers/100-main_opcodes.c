#include "function_pointers.h"

/**
 *main -  prints the opcodes of its main function.
 *@argc: counts integer
 *@argv: argument vector
 *Return: 0 when executed
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < atoi(argv[1]) - 1; i++)
		printf("%02hhx ", ((char *)main)[i]);
		printf("%02hhx\n", ((char *)main)[i]);
	return (0);
}
