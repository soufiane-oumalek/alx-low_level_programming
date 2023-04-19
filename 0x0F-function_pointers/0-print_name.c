#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - function that print the name
 * @f: the function
 * @name: the name
 * Return: 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0)
	{
		f(name);
	}
}

