#include <stdlib.h>
#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * @array: pointer to an array
 * @size: size of the array
 * @action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && action != NULL)
	{
		for (i = 0 ; i < size ; i++)
			(*action)(array[i]);
	}
}
