#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: pointer to the memory area
 * @n: bytes of memory
 * @b: constant by
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
