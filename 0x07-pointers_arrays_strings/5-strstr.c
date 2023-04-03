#include "main.h"
/**
* _strstr - function locate a substring
* @haystack: pointer to char
* @needle: pointer to char
* Return: 0
*/

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *p = needle;

		while ( *a == *p && *p != '\0')
		{
			a++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
	}
	return (0);
}

