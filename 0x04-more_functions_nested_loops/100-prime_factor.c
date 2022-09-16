#include <stdio.h>

/**
 * main - code block
 * Return: 0 if success
 */

int main(void)
{
	long long int i = 3, n = 612852475143;

	for (; i < 12057; i += 2)
	{
		while (n % i == 0 && n != i)
			n /= i;
	}
printf("%lu\n", n);

	return (0);
}
