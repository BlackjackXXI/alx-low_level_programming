#include "main.h"

void *malloc_checked(unsigned int size)
{
	void *ptr;

	if (size <= 0)
		exit(98);

	ptr = malloc(size);
	if (!ptr)
		exit(98);
	else
		return (ptr);
}
