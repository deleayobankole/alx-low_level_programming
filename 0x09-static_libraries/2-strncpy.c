#include "main.h"

/**
 * _strncpy - fn def
 * @dest: home
 * @src: away
 * @n: param
 * Return: always true
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a;

	if (dest == NULL)
	{
		return (NULL);
	}

	a = 0;
	while (dest[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
