#include "main.h"

/**
 * checked - allocates memory using malloc.
 *
 * @space: the size of the space to allcate.
 *
 * Return: pointer to the allocated memory
 */
void *checked(unsigned int size)
{
	void *pointer;

	if (size <= 0)
		exit(98);

	pointer = malloc(space);
	if (!pointer)
		exit(98);
	else
		return (pointer);
}
