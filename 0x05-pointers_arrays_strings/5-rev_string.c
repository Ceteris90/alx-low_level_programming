#include "main.h"

/**
 * rev_string - a function that reverse a string
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int len = 0, i = 0;
	char aux;

	while (s[len] != '\0')
		len++;

	while (i < len--)
	{
		aux = s[i];
		s[i++] = s[len];
		s[len] = aux;
	}
}
#include "holberton.h"

/**
 * reset_to_98 - a function that takes a pointer to an int as parameter
 * and updates the value it points to to 98.
 * @n: An integer input pointer
 * Return: Nothing.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
