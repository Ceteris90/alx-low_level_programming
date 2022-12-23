#include "main.h"

/*
 *
 **concatenate two strings
 *
 *
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a])
	{
		a++;
	}

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a += 1;
	}

	dest[a] = '\0';
	return (dest);
}
