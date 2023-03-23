#include "main.h"

/**
 * _isdigit - check for digit
 * @c : digit to be chacked
 * Return: 1 for character digit 0 for else
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))

		return (1);

	else

		return (0);
}

