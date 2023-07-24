#include "main.h"
#include <unistd.h>
/**
 * main.h - prototype location
 *
 * creating a function _putchar that prints a character
 * 
 * i used unistd 'write' call
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

