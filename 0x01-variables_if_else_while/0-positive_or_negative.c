#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - the code begins here
 *
 * Return: this will give 0 if success
 *
 */
int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	/* your code goes there */
	if (n > 0)
	{
		printf("%d is postive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}

	return (0);
}
