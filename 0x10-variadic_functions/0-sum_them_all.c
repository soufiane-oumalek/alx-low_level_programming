#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: argument num
 * Return: sum of all param
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argv;
	int S = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(argv, n);

	for (i = 0; i < n; i++)
	{
		S += va_arg(argv, int);
	}
	va_end(argv);

	return (S);
}
