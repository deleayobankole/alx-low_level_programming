#include "main.h"
/**
 * print_sign - tests the sign
 *
 * @n: character to compare
 *
 * Return: 1 if success, 0 otherwise
 *
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		r = 1;
		_putchar('+');
	}

	else if (n == 0)
	{
		r = 0;
		_putchar('0');
	}

	else if (n < 0)
	{
		r = -1;
		_putchar('-');
	}

	return (r);
}
