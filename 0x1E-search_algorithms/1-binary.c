#include "search_algos.h"
#include <stdio.h>
/**
 * binary_search -  searches for a value in a sorted array
 * of integers using the Binary search algorithm
 * @array: an array
 * @size: size array
 * @value: value for search
 * Return: index num
 */
int binary_search(int *array, size_t size, int value)
{
    int left = 0;
    int right = (int)size - 1;
    int mid;
    int i;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
            else
                printf("\n");
        }

        mid = left + (right - left) / 2;

        if (array[mid] == value)
            return (mid);

        if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
