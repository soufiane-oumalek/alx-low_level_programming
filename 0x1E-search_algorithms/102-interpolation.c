#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: the index where the value is located, or -1 if not found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low, high, pos;
	double f;

	if (array == NULL || size == 0)
		return -1;

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		pos = low + (size_t)f;

		printf("Value checked array[%d] = [%d]\n", (int)pos, array[pos]);

		if (array[pos] == value)
			return (int)pos;

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%d] is out of range\n", (int)low);

	return -1;
}
