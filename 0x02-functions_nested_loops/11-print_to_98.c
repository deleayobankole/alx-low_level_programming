#include "main.h"
/**
 * print_to_98 - print numbers to 98
 * @n: variable to use
 * Return: 1 if success, 0 otherwise
 *
 */
void print_to_98(int n)
{
	while (n < 98)
	{
		printf("%i, ", n);
		n++;
	}

	while (n > 98)
	{
		printf("%i, ", n);
		n--;
	}
	printf("98");
	putchar('\n');
}
