#include "main.h"

/**
 * _memset - fn def
 * @s: destination
 * @b: source
 * @n: integer to set
 * Return: destination
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
