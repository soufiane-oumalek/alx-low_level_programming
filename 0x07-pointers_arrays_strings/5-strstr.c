#include "main.h"

 /**
 * _strstr - Entry Function
 * @haystack: char
 * @needle: char
 * Return: haystack or NULL (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *p = needle;

		while (*a == *p && *p != '\0')
		{
			a++;
			p++;
		}
		if (*p == '\0')
		return (haystack);
	}
	return (0);
}

