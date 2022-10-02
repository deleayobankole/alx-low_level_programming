#include "main.h"
/**
 * _isalpha - tests if lowercase or not
 *
 * @c: character to compare
 *
 * Return: 1 if success, 0 otherwise
 *
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
