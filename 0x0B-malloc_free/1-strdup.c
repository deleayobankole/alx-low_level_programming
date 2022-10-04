#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strdup - return to nelwy allocated space
 * @str: string
 * Return: string or null
 */
char *_strdup(char *str)
{
	char *dst;
	int i;
	int c = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[c] != '\0')
		c++;

	dst = malloc(sizeof(char) * c + 1);

	if (dst == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < c; i++)
		dst[i] = str[i];

	return (dst);
}
