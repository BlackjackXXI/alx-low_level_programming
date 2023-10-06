#include "main.h"

/**
 * malloc_checked - allocates memory using malloc.
 *
 * @size: the size od the space to allcate.
 *
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int size)
{
	void *mal;

	if (size <= 0)
		exit(98);

	mal = malloc(size);
	if (!mal)
		exit(98);
	else
		return (mal);
}
