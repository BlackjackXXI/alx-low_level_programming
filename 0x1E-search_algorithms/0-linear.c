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
	size_t S;
	if (!array)
		return (-1);
   
	for (S = 0; S < size; S++)
  {
		printf("Checking arr[%ld] = [%d]\n", S, array[S]);
		if (value == array[i])
			break;
  }

	if (S == size)
		return (-1);
	return (S);
}
