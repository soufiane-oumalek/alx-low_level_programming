#include "main.h"

/**
 * _memcpy - copy memroy of area
 * @dest: memory stored
 * @src: memory copied
 * @n: number bytes
 * Returne:(dest) copied memory n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y = 0;
	int i = n;

	for (; y < i ; y++)
	{
		dest[y] = src[y];
		n--;
	}
	return (dest);
}
