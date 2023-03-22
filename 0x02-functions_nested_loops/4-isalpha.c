#include "main.h"
/**
 * _isalpha - Shows 1 if the input is a
 * letter. Another cases, shows 0
 *
 * @a: The character is ASCII code
 *
 * Return: 1 for letters. 0 for the rest.
 */

int _isalpha(int a)
{
	if ((a >= 97 && a <= 122) || (a >= 65 && a <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
