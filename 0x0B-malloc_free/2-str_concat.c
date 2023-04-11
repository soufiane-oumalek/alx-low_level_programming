#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: first str
 * @s2: second str
 * Return: point to a newly allocated space in memory
 * which contains the contents of s1, followed by the contents of s2,
 * and null terminated if NULL is passed, treat it as an empty string
 */
char *str_concat(char *s1, char *s2)
{
	int i, k, len, len1, len2;
	char *res;

	len1 = len2 = 0;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
			len1++;
	}

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
			len2++;
	}

	len = len1 + len2;
	res = (char *)malloc(sizeof(char) * (len + 1));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		res[i] = s1[i];

	for (k = 0; k < len2; k++, i++)
		res[i] = s2[k];
	res[len] = '\0';

	return (res);
}

