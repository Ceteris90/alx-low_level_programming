#include <stdio.h>
#include <unistd.h>

/*
 * _putchar : write the character in standard out library
 *
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
