#include <stdlib.h>

/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integer
 * @width: width of array
 * @height: height of array
 * Return: a pointer to a 2 dimensional of integer
 */
int **alloc_grid(int width, int height)
{
	int **ar;
	int index, i, j;

	if (width <= 0 || height <= 0)
		return (0);
	ar = (int **)malloc(sizeof(int *) * height);
	if (ar == 0)
	{
		free(ar);
		return (0);
	}
	for (index = 0; index < height; index++)
	{
		*(ar + index) = (int *)malloc(sizeof(int) * width);
		if (*(ar + index) == 0)
		{
			for (i = 0; i < index; i++)
				free(*(ar + i));
			free(ar);
			return (0);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(ar + i) + j) = 0;
	}
	return (ar);
}

