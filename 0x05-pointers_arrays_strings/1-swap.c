#include "main.h"

/**
 * swap_int - function to swap
 * @a: first value
 * @b: second value
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
