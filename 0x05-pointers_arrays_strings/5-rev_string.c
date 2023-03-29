#include "main.h"
#include <string.h>

/**
 * rev_string -  reverses a string
 * @s: input string
 * return: string in reverse
 */

void rev_string(char *s)
{
	int counter;
	int i;
	int n;

	i = strlen(s);
	for (n = 0; n < i / 2; n++)
	{
		counter = s[n];
		s[n] = s[i - n - 1];
		s[i - n - 1] = counter;
	}
}
