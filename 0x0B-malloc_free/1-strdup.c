#include "main.h"
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: new  str duplicate
 * Return: NULL if str = NULL
 */
char *_strdup(char *str)
{
	char *c;
	int i, len = 0;

	if (str == 0)
		return (0);

	while (str[len] != '\0')
		len++;

	c = (char *)malloc((sizeof(char) * len) + 1);
	if (c == 0)
		return (0);

	for (i = 0; i < len; i++)
		c[i] = str[i];
	c[len] = '\0';

	return (c);
}
