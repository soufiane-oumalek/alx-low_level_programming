#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s:starting pointer
 * @b:change data
 * @n:number change
 * Returns: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

