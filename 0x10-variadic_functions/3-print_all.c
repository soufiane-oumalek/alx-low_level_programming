#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_all - function that prints anything
 * @format: argumants
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list argvs;
	char *s	= NULL;
	char a = '\0';
	int i = 0;
	float e = 0.0;

	va_start(argvs, format);
	while (format && format)
	{
		switch (format[i])
		{
			case 's':
				s = va_arg(argvs, char *);
				if (s == NULL)
					printf("%s", s);
				else
					printf("(nil)");
			case 'a':
				a = va_arg(argvs, int);
				printf("%c", a);
				break;
			case 'i':
				i = va_arg(argvs, int);
				printf("%d", i);
				break;
			case 'e':
				e = va_arg(argvs, double);
				printf("%f", e);
				break;
			default:
				printf("invalide format");
				break;
		}
		i++;
		if (format[i])
			printf(", ");
	}
	printf("\n");
	va_end(argvs);
}

