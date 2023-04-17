#include "main.h"
/**
 *print_alphabet - Entry poin
 *
 * print_alphabet in a lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	char c = 'a';
	int i = 0;

	for (i = 0 ; c < 26 ; i++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

