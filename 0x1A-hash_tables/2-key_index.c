#include "hash_tables.h"
/**
 * key_index - get index of key
 * @key: value
 * @size: size of array
 *
 * Return: value value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	if (size == 0)
		return (0);
	value = hash_djb2(key);

	return (value % size);
}
