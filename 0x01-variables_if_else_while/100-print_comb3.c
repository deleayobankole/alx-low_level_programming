#include <stdio.h>
/**
 * main - the code begins here
 *
 * Return: this will work if 0
 *
 */
int main(void)
{
	int num;
	int lp;

	for (lp = 10; lp < 20; lp++)
	{

		for (num = 10; num < 20; num++)
		{
			if ((num % 10) > (lp % 10))
			{
				putchar((lp % 10) + '0');
				putchar((num % 10) + '0');
				if (lp != 18 || num != 19)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
