#include "main.h"

/**
 * print_line - prints some line
 * @n: param
 */

void print_line(int n)
{
	int a;

	for (a = 1; a <= n; a++)
	{
		if (n > 0)
		{
			_putchar(95);
		}
		else
		{
			_putchar('\n');
		}

	}

	_putchar('\n');
}
