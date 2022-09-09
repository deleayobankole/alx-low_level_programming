#include <stdio.h>
/**
 * main - the code begins here
 *
 * Return: this will work if 0
 *
 */
int main(void)
{
	int xter;

	for (xter = 0; xter < 10; xter++)
	{
		putchar((xter%10) + '0');
	}
	putchar('\n');
	return (0);
}
