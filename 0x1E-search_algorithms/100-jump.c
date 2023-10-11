#include "search_algos.h"
#include <math.h>
#include <stdio.h>
/**
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: the index where the value is located, or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int step = (int)sqrt(size);
	int left = 0;
	int right = 0;
	int i;

	if (array == NULL)
		return (-1);

	while (right < (int)size && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += step;
	}

	printf("Value found between indexes [%d] and [%d]\n", left, right);

	right = (right < (int)size) ? right : (int)size - 1;
	for (i = left; i <= right; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
