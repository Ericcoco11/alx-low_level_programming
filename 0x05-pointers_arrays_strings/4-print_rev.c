#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int longi = 0;
	int O;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (O = longi; O > 0; O--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
