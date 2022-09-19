#include "main.h"

/**
 * puts_half - fn def
 * @str: param
 */

void puts_half(char *str)
{
	int num, a;

	num = 0;

	while (num >= 0)
	{
		if (str[num] == '\0')
		{
			break;
		}
		num++;
	}

	if (num % 2 == 1)
	{
		a = num / 2;
	}
	else
	{
		a = (num - 1) / 2;
	}

	for (a++; a < num; a++)
	{
		_putchar(str[a]);
	}

	_putchar('\n');
}

