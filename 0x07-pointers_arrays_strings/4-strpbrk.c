#include "main.h"

/**
 * _strpbrk - fn searches for a string
 * @s: string to search
 * @accept: string to test
 * Return: this should be null
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (0);
}
