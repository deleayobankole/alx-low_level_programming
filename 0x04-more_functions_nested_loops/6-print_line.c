#include "main.h"

/**
 * print_line - prints some line
 * @n: param
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a < n; a++)
		{
			putchar('_');
		}
	}

	_putchar('\n');
}
