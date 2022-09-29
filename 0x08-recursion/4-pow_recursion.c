#include "main.h"

/**
 * _pow_recursion - function to raise an integer
 * @x: base number
 * @y: multiplier or number to raise
 * Return: integer value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y != 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (1);
}
