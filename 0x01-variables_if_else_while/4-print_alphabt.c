#include <stdio.h>
/**
 * main - the code begins here
 *
 * Return: this will work if 0
 *
 */
int main(void)
{
	char xter = 'a';

	do {
		if (xter == 'e' || xter == 'q')
		{
			xter++;
			continue;
		}

		putchar(xter);
		xter++;

	} while (xter <= 'z');

	putchar('\n');
	return (0);
}
