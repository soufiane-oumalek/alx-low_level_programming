#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: an array
 * @size: size array
 * @value: value for search
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i = 0;

	if (array == NULL)
		return (-1);

	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}

	return (-1);
}
