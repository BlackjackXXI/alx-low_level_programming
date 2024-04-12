#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
#include <math.h>

/**
 * linear_search - performs a search for a value in an array of integers
 * @array: points to the first element of the array to look for
 * @size:  number of array elements
 * @value: value to look for
 * Description: searchs the algorithm for usage of Linear search
 * Return: returns a -1 when value is not present in the array
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (!array)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
   
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);
		i = left + (right - left) / 2;
   
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
