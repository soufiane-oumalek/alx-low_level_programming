#include <stdlib.h>
#include <stdtime.h>
#include <stdio.h>
/**
 * main - Entry point
 * assign a random number
 * Return: Always (0) Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last of digit = n % 10
	if (n % 10 > 5)
		printf("last of digit %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 5)
		printf("last of digit %d is %d and is 0\n", n, n % 10);
	else if (n % 10 < 5)
		printf("last of digit %d is %d and is less than 5\n", n, n % 10);
	return (0);
}
