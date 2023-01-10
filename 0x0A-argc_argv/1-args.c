#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments.
 * @argc: argument count
 * @argv: Argument vector for values
 *
 *
 * Return: Always to 0
 */
int main(int argc, char *argv[])
{
	int arg;

	for (arg = 0; arg < argc; arg++)
		printf("%d\n", arg[arg]);

	return (0);
}
