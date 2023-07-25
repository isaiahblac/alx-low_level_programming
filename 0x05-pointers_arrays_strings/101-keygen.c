#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int myrand;
	int count;
	int result;

	srand(time(NULL));
	for (count = 0, result = 2772; result > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		result -= myrand;
	}
	printf("%c", result);

	return (0);
}
