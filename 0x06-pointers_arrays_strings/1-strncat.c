#include "main.h"

/**
 * _strncat - fn def
 * @dest: away
 * @src: home
 * @n: param
 * Return: home
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (b = 0; src[b] != '\0'; b++)
	{}

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[b + a] = src[a];
	}

	dest[b + a] = '\0';

	return (dest);
}

