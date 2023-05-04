#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint -  converts a binary number to an unsigned int
 * @b: pointing to a string
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		n = (n << 1) + (*b++ - '0');
	}
	return (n);
}

