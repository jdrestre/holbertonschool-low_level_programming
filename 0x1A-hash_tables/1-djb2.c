#include "hash_tables.h"

/**
 * hash_djb2 - better distribution of the keys and fewer splits. it also
 * happens to be a good general hashing function with good distribution.
 * @str: string to calculate hash
 *
 * Return: Calculate hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
