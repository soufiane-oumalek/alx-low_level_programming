#include "main.h"

/**
* _strspn - Gets the length of a prefix substring
* @s: String substring
* @accept: substring accepte char
* Return: the number of bytes in the initial segment of s
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	char *p;

	while (*s++)
	{
		while (*accept++)
			if (*(s - 1) == *(accept -1))
			{
				n++;
				break;
			}
		if (!(*--accept))
			break;

		accept = p;
	}
	return (n);
}

