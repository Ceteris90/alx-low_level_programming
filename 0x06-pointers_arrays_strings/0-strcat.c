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
	while(dest[a] != '\0')
	{
		a++;
	}
	j = 0;
	while(dest[b] != '\0')
	{
		dest[i]=src[j];
		i++;
		j++;
	}

	dest[i] = '\0';
	return (dest);
}
