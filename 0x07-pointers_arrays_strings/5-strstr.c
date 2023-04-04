#include "main.h"
/**
 * _strstr - finds the first occurrence of the
 * substring needle in the string haystack.
 * The terminating null bytes (\0) are not compared.
 * @haystack: input
 * @needle: input
 * Return: always 0.
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}
	return (0);
}
