#include "main.h"
/**
 * print alphabet - print alphabet in lowecase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
	return (0);
}

