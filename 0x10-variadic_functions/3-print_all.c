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
	va_list args;
	char *str;
	int i;
	int flag;

	va_start(args, format);
	i = 0;
	
	while (format != NULL &&  format[i] != '\0')
	{
		switch (format[i])
		{
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				else
					printf("%s", str);
					flag = 0;
			case 'c':
				printf("%c", va_arg(args, int);
				flagg = 0
				break;
			case 'i':
				printf("%i", va_arg(args, int);
				flagg = 0;
				break;
			case 'f':
				printf("%f", va_arg(args, double);
				flag = 0;
				break;
			default:
				flag = 1;
				break;
		}
		if (format[i + 1] != '\0' && flag == 0)
			printf(", ");
		i++;
	}
	printf("\n");

	va_end(args);
}

