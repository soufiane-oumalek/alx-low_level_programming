#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: array pointer
 * @size: array size
 * @action: fucntion for call each of elements
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;


	if (array != 0 && size > 0)
		if (action != 0)
			for (count = 0; count < size; count++)
				action(array[count]);
}
