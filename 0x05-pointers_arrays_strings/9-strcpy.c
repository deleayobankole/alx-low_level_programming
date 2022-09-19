#include "main.h"

/**
 * _strcpy - fn def
 * @dest: param 1
 * @src: param 2
 * Return: some thing
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; *(src + a) != '\0'; a++)
	{
		dest[a] = *(src + a);
	}

	dest[a] = '\0';

	return (dest);
}
