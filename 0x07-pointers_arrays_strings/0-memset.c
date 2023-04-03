#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s:starting pointer
 * @b:change data
 * @n:number change
 * Returns: change array with new a value n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0 ; n > 0 ; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

