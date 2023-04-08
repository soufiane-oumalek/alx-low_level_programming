#include "main.h"


/**
 * _memcpy - copies n bytes from memory area "src" to memory area "dest"
 * @dest: the memory of area destination.
 * @src: the memory of area source.
 * @n: the number bytes to copy from "src"
 * Return: dest.
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
