#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates 2 strings
 * @s1: pointer for string
 * @s2: array of string
 * @n: number bytes
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, length1, index;
	char *s;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	length1 = 0;

	while (s1[length1])
		length1++;

	s = malloc(sizeof(char) * (length1 + n + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0, index = 0; i < (length1 + n); i++)
	{
		if (i < length1)
		{
			s[i] = s1[i];
		}
		else
		{
			s[i] = s2[index++];
		}
	}
	s[i] = '\0';
	return (s);
}
