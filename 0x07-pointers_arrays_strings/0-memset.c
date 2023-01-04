#include "main.h"
/**
 * memset - Fills the first n bytes of the memory area
 * s: pointer to the memory area
 * @n: bytes of memory
 * @b: constant byte
 *
 * Return: the memory area of s
 */
char *_memset(char *s, char b, unigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);



}
