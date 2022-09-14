#include "main.h"
/**
 * print_times_table - print times table n times
 * @n: factor that tests number of prints
 * Return: 1 if success, 0 otherwise
 *
 */
void print_times_table(int n)
{
	if (n > 15 || n < 0)
	{
		return (0);
	}

	int a;
	int b;
	int c;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;

			if ((c / 10) == 0)
			{
				if (b == 0)
				{
					_putchar('0');
				}
				if (b != 0)
				{
					_putchar(' ');
					_putchar((c % 10) + '0');
				}
				if (b < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
				if (b < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
