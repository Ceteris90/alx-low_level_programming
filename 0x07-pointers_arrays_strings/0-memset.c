#include "main.h"
/**
 * memset - Fills the first n bytes of the memory area
 * s: pointer to the memory area
 * @n: bytes of memory
 * @b: constant byte
 *
 * Return: the memory area of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);



}
