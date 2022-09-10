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
	char xter;

	for (num = 0; num < 10; ++num)
	{
		putchar((num % 10) + '0');
	}

	for (xter = 'a'; xter <= 'f'; xter++)
	{
		putchar(xter);
	}
	putchar('\n');
	return (0);
}
