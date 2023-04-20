#include "variadic_functions.h"

/**
 * print_strings - prints strings, followed by a new line
 * @n: argument number
 * @separator: pointer string
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list argv;
	unsigned int i = 0;
	char *ptr_str;

	va_start(argv, n);

	while (i < n)
	{
		ptr_str = va_arg(argv, char *);
		printf("%s", ptr_str ? ptr_str : "(nil)");

		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
		i++;
	}
	printf("\n");
	va_end(argv);
}
