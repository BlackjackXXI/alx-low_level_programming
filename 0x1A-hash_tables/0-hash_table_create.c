#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table.
 * @size: The size of the new hash table.
 * Return: A pointer to the new hash table.
 */

hash_table_t *create_hash_table(unsigned long int size)
{
	unsigned int index = 0;
	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	if (new_table == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	new_table->size = size;
	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table->array == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		return (NULL);
	}

	for (; index < size; index++)
		new_table->array[index] = NULL;

	return (new_table);
}
