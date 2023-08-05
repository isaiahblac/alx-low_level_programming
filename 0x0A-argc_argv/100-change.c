#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the minimum number of
 * coins to make change for an amount of money
 * @argc: arguements counter
 * @argv: argument arrays of string
 * Return: 1 or 0
 */
int main(int argc, char *argv[])
{
	int money;
	int coins = 0;

	if (argc == 2)
	{
		money = atoi(argv[1]);
		if (money < 0)
		{
			printf("%d\n", 0);
			return (0);
		}
		if (money % 25 >= 0)
		{
			coins += money / 25;
			money = money % 25;
		}
		if (money % 10 >= 0)
		{
			coins += money / 10;
			money = money % 10;
		}
		if (money % 5 >= 0)
		{
			coins += money / 5;
			money = money % 5;
		}
		if (money % 2 >= 0)
		{
			coins += money / 2;
			money = money % 2;
		}
		if (money % 1 >= 0)
			coins += money;
		printf("%d\n", coins);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
