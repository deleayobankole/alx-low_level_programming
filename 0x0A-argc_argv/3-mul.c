#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - the main fn
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
		return (0);
	}

	printf("Error\n");
	return (1);
}
