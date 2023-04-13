#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates 2 strings
 * @s1: pointer for the first string
 * @s2: pointer for the second string
 * @n: number bytes
 * Return: pointer shall point to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index1, index2, length1, length2;
	char *s;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	length1 = 0;

	while (*(s1 + length1))
		length1++;
	length2 = 0;

	while (*(s2 + length2))
		length2++;
	if (n >= length2)
		n = length2;
	s = malloc(sizeof(char) * (length1 + n + 1));
	if (s == 0)
		return (0);
	for (index1 = 0; index1 < length1; index1++)
		*(s + index1) = *(s1 + index1);
	for (index2 = 0; index2 < n; index2++, index1++)
		*(s + index1) = *(s2 + index2);
	*(s + index1) = '\0';
	return (s);	
}

