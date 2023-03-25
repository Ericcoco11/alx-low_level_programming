#include "main.h"

/**
 * _isdigit - Checks for digits from 0 to 9
 * @c: the character to be checked
 * Return: 1 for degit character or 0 for anything else
 */

int _isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
