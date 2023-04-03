#include "main.h"

 /**
 * _strstr - function for locates a substring
 * @haystack: pointer on char
 * @needle: pointer on  char
 * Return: Always 0 (Success)
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
