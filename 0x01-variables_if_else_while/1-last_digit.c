#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - A program to assing a random number to a variable
 * Return: 0
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
		printf("last digit 0f %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("last digit of the %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("last digit of the %d is %d and is less than 6 and  not 0\n", n, ld);
	}
	return (0);
}
