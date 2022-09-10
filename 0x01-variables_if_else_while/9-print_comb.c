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

	for (num = 10; num < 20; num++)
	{
		putchar((num % 10) + '0');
		if (num != 19)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
