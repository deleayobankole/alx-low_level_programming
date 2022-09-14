#include "main.h"
/**
 * _abs - tests the sign
 *
 * @r: character to compare
 *
 * Return: 1 if success, 0 otherwise
 *
 */
int _abs(int r)
{
	if (r >= 0)
	{
		return (r);
	}
	else
	{
		return (r * -1);
	}
}
