#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: small number
 * @max: large number
 * Return:  pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int length, n, k;

	if (min > max)
		return (0);
	length = (max - min) + 1;
	ptr = malloc(sizeof(int) * length);

	if (ptr == 0)
		return (0);

	for (n = min, k = 0; n <= max; k++, n++)
		*(ptr + k) = n;
	return (ptr);
}
