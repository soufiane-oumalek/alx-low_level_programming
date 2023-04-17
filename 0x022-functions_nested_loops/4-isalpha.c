#include "main.h"
/**
 * int _isalpha - _isalpha - check for lower case letter
 *
 * @c : character to check
 *
 * Return: 1 and 0
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
