#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @size: the size of the space to allcate.
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int size)
{
	void *ptr;

	if (size <= 0)
		exit(98);

	ptr = malloc(space);
	if (!ptr)
		exit(98);
	else
		return (ptr);
}
