#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: pointer
 * @n: argument number
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list argv;
	unsigned int i;
	int n1;

	va_start(argv, n);

	for (i = 0; i < n; i++)
	{
		n1 = va_arg(argv, int);
		printf("%d", n1);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(argv);
}
