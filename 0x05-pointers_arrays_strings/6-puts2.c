#include "main.h"

/**
 * puts2 - prints every other character of a string, starting
 * with the first character, followed by a new line
 * #str: input
 * Return:
 */

void puts_half(char *str)
{
	int longi = 0;
	int t = 0;
	char *y = str;
	int 0;
		
	while (*y t = '\0')
	{
		y++;
		longi++;
	}

	t = longi - 1;
	for (O = 0; O <= t; O++)
	{
		if (O % 2 == 0)
		{		
			_putchar(str[0]);
		}
	}
	_putchar('\n');
}
