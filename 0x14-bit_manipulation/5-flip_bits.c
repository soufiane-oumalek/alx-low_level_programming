#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: num 1
 * @m: num 2
 * Return: number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int i = 0;

	for (; x != 0; i++)
	{
		x &= (x - 1);
	}
	return (i);
}

