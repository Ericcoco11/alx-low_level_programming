#include <stdio.h>

/**
 * swap_int - swap the values of two integers
 * @a: first integer to swap
 * @b: second integer to swap.
 * Return: always 0
 */

void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
