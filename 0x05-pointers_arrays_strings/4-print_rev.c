#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 * return: 0
 */

void print_rev(char *s)
{
	int longi = 0;

	while (s[longi] != '\0')
	{
		longi++;
	}
	for (longi -= 1; longi > 0; longi--)
	{
		_putchar(s[longi]);
	}

	_putchar('\n');
}
