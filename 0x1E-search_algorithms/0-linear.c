#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - performs a search for a value in an array of integers
 * @array: points to the first element of the array to look for
 * @size:  number of array elements
 * @value: value to look for
 * Description: searchs the algorithm for usage of Linear search
 * Return: returns a -1 when value is not present in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;
	if (!array)
		return (-1);
   
	for (i = 0; i < size; i++)
  {
		printf("Checking arr[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
			break;
  }

	if (i == size)
		return (-1);
	return (i);
}
