#include "main.h"

/**
 * string_toupper - Changes all lowercase letters
 * @str: The string to be changed.
 *
 * Return: A pointer to the changed string.
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (strc[i] != 0)
	{
		if (strc[i] >= 97 && str[i] <= 122)
		{
			str[i] -= 32;
		}
		i++;
	}
	return(str);
}
