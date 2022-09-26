#include "main.h"

/**
 * _strchr - function to test occurrence of xter
 * @s: string to search
 * @c: character to search
 * Return: value to return if character present or null
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}

	}

	if (s[i] == c)
		return (s + i);

	return (0);
}
