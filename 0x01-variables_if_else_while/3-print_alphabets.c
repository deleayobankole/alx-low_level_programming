#include <stdio.h>
/**
 * main - the code begins here
 *
 * Return: this will work if 0
 *
 */
int main(void)
{
	char xter;
	char XTER;

	for (xter = 'a'; xter <= 'z'; ++xter)
	{
		putchar(xter);
	}

	for (XTER = 'A'; XTER <= 'Z'; ++XTER)
	{
		putchar(XTER);
	}
	putchar('\n');
	return (0);
}
