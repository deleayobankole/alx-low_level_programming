#include "main.h"

/**
 * more_numbers - print as said
 */

void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
		j = 0;

		while (j <= 14)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + 48);
			}

			_putchar((j % 10) + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
