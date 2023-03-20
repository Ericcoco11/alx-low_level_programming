#include <stdio.h>
/**
 * Main - A program that prints the alphabets in lowercase then uppercase
 * Return: Always 0
 */
int main(void)
{
	int n = 97;
	int m = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (m <= 90)
	{
		putchar(m);
		n++;
	}
	putchar('\n');
		return (0);
}
