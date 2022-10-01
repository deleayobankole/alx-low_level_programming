#include <stdio.h>
#include "main.h"
/**
 * main - the main fn
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /* ignore argv */

	printf("%i\n", argc - 1);

	return (0);
}
