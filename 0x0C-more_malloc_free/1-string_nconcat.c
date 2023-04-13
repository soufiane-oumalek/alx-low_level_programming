#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, k;

	if (s1 == 0)
		i = 0;
	else
	{
		for (i = 0; s1[1]; i++)
			;
	}
	if (s2 == 0)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}

	if (j > n)
		j = n;

	str = malloc(sizeof(char) * (i + j + 1));
	if (str == 0)
		return (0);

	for (k = 0; k < i; k++)
		str[k] = s1[k];

	for (k = 0; k < j; k++)
		str[k + i] = s2[k];

	str[i + j] = '\0';
	return (str);
}

