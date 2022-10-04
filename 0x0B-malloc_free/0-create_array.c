#include <stdlib.h>

/**
 * create_array - function to create array
 * @size: array size
 * @c: initialize
 * Return: array or null
 */

char *create_array(unsigned int size, char c)
{
	char *m = malloc(size);

	if (size == 0 || m == 0)
	{
		return (0);
	}

	while (size--)
	{
		m[size] = c;
	}

	return (m);
}
