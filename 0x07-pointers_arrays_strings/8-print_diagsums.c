#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - fn to print diagonal summations
 * @a: array
 * @size: size of the diagonal
 */

void print_diagsums(int *a, int size)
{
	int i;
	int add1 = 0;
	int add2 = 0;

	for (i = 0; i < size; i++)
	{
		add1 += a[(i * size) + i];
		add2 += a[(size - 1) + ((size - 1) * i)];
	}
	printf("%d, %d\n", add1, add2);
}
