#include "main.h"

/**
 * _strchr - prints for found c
 * @s: pointer  char
 * @c: char params to found
 * Return: Always 0
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
