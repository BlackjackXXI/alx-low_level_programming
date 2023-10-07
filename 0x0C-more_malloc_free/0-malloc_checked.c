#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocated memory with malloc
 * @bytes: space to be allocated
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(bytes);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}