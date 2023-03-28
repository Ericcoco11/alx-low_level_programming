#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @srt: string to print.
 * return: always 0
 */

void _puts(char *str)
{
	char str;

	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
