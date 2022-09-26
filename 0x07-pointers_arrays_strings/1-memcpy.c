#include "main.h"

/**
 * _memcpy - fn def
 * @dest: destination
 * @src: source
 * @n: integer to set
 * Return: destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	if (dest == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
