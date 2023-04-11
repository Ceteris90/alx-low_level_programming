#include "hash_tables.h"

/**
 * hash_djb2 - convert a str into a hash value.
 * @str: string to convert
 *
 * Return: Hash (unsigned long int)
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int charac;

	hash = 5381;
	while ((charac = *str++))
	{
		hash = ((hash << 5) + hash) + charac;
	}

	return (hash);
}
