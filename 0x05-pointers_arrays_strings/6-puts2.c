#include "main.h"

/**
 * puts2 - prints every other character of a string, starting
 * with the first character, followed by a new line
 * @str: input
 * Return:
 */

void puts2(char *str)
{
	int longi = 0;
	int t;

	while (str[longi] != '\0')
	{
		longi++;
	}
	for (t = 0; t < longi; t += 2)
	{
		_putchar(str[t]);
	}
	_putchar('\n');
}
