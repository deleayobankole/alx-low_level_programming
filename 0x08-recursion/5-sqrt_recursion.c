#include "main.h"
/**
 * squarer - tests for the square root
 * @a: tests to be sure
 * @b: number to sqaure
 * Return: integer value or error
 */
int squarer(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (1);
	return (squarer(a + 1, b));
}
/**
 * _sqrt_recursion - recursively tests the supplied number
 * @n: number to find sq root
 * Return: integer to return
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (squarer(1, n));
}
