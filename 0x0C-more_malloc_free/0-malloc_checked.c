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
	void *mallok;

	if (size <= 0)
		exit(98);

	mallok = malloc(size);
	if (!mallok)
		exit(98);
	else
		return (mallok);
}
