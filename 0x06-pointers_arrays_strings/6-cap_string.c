#include "main.h"

/**
 * cap_string - capitalize words in a string
 * @b: pointer to string variables
 * flag: indicates beginning of a new word
 * sep: seperators
 * Return: b
 */

char *cap_string(char *b)
{
	int i;
	int j;
	int flag;
	char sep[] = ",;.!?(){}\n\t\" ";

	for (i = 0, flag = 0; b[i] != '\0'; i++)
	{
		if (b[0] > 96 && b[0] < 123)
			flag = 1;
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (sep[j] == b[i])
				flag = 1;
		}

		if (flag)
		{
			if (b[i] > 96 && b[i] < 123)
			{
				b[i] = b[i] - 32;
				flag = 0;
			}
			else if (b[i] > 64 && b[i] < 91)
				flag = 0;
			else if (b[i] > 47 && b[i] < 58)
				flag = 0;
		}
	}
	return (b);
}
