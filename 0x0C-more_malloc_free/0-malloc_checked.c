#include "main.h"

/**
 * checkedmalloc - allocates memory using malloc.
 *
 * @allspace: the size of the space to allcate.
 *
 * Return: pointer to the allocated memory
 */
void *checkedmalloc(unsigned int size)
{
	void *ptr;

	if (size <= 0)
		exit(98);

	ptr = malloc(allspace);
	if (!ptr)
		exit(98);
	else
		return (ptr);
}
