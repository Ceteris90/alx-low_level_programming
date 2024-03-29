#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name.
 * @name: The name to be printed.
 * @f: A pointer to a function that prints a name.
 * Return: function to ponter to print name
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(*f)(name);
	}
}
