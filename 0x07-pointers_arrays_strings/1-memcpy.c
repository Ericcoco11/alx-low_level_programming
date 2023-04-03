#include "main.h"
/**
 * _memcpy - copies n bytes from memory area src to
 * memory area dest.
 * @dest: memory
 * @src: memory
 * @n: number of bytes
 *
 * Return: n byte changed with coppied memory
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
