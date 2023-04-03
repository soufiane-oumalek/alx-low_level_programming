#include "main.h"

/**
 * _strpbrk - locates the first occurrence in "s" of any bytes in "accept"
 * @s: the string scanned
 * @accept: the string containing the characters to match
 * Return: pointer of the first matching characters
 */

char *_strpbrk(char *s, char *accept)
{
	int y;

	while (*s)
	{
		for (y = 0 ; accept[y]; y++)
		{
			if (*s == accept[y])
				return (s);
		}
	s++;
	}
	return ('\0');
}
