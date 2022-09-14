#include <stdio.h>
/**
 * main - it starts here
 *
 * Return: 0 if correct
 *
 */
int main(void)
{
	long int fnb[50];
	int n;

	fnb[0] = 1;
	fnb[1] = 2;
	fnb[50] = 20365011074;

	printf("%ld, ", fnb[0]);
	printf("%ld, ", fnb[1]);

	for (n = 2; n < 49; n++)
	{
		fnb[n] = fnb[n - 1] + fnb[n - 2];
		printf("%ld, ", fnb[n]);
	}
	printf("%ld", fnb[50]);
	printf("\n");
	return (0);
}
