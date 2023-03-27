#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string to check in the length
 * Return: length of the string
 */

int _strlen(char *s)
{
int length;
	length = 0;

	for (length = 0; *s != '\0'; s++)
	{
		length++;
	}
return (length);
}

