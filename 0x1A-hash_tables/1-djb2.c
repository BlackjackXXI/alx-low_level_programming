#include "hash_tables.h"

/**
 * djb2_hash - Implements the djb2 hash function algorithm.
 * @str: String to hash.
 * Return: Hash value.
 */
unsigned long int custom_djb2_hash(const unsigned char *str)
{
	unsigned long int hash_value = 5381;
	int current_char;
 
	if (str == NULL)
		return (0);

	while ((current_char = *str++))
	{
		hash_value = ((hash_value << 5) + hash_value) + current_char;
   
	}
	return (hash_value);
}

