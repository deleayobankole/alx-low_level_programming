#include "main.h"

/**
 * _isupper - tests for letter cases
 * Return: 0 0r 1
 * @c: character to test
 */

int _isupper(int c)
{
	if (c >= 65 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
