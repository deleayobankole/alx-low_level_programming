#include "main.h"

/**
 * factorial - function to return factorial
 * @n: integrer number to test
 * Return: integer value to return after recursion
 */

int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
