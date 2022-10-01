#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * isInteger - checks if value is integer
 * @s: string to check
 * Return: 0 or 1
 */
int isInteger(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * main - the main fn
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, j = 0, k = 0;
	int c[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (isInteger(argv[1]))
	{
		i = atoi(argv[1]);

		while (i > 0 && k <= 4)
		{
			if (i >= c[k])
			{
				i -= c[k];
				j++;
			}
			else
			{
				k++;
			}
		}
	}
	printf("%i\n", j);
	return (0);
}
