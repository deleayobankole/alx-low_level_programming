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
	unsigned int i = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);

	for (; str[size]; size++)
		;
	size++;

	m = malloc(size * sizeof(char));

	if (m == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; i < size; i++)
			m[i] = str[i];
	}
	return (m);
}
