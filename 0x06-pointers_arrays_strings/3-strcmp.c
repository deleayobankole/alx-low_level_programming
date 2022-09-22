#include "main.h"

/**
 * _strcmp - fn def
 * @s1: param 1
 * @s2: param 2
 * Return: always
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
		i++;
	}

	return (s1[i] - s2[i]);
}
