#include "main.h"
/**
 * print alphabet - print alphabet in lowecase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);
{
	char c = 'a';
	int i;

	for (i = 97; i < 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}

