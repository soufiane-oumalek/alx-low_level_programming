#include "main.h"

/**
 * set_bit - sets the value of a bit to 0 at a given index
 * @n: decimal number
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p = 1;
	unsigned int i;

	if (index > 64)
		return (-1);

	for (i = 0; i < index; i++)
		p *= 2;

	*n += p;
	return (1);
}
