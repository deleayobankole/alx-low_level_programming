#include <stdio.h>
/**
 * main - it startes here
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i;
	long int j, k, l, m;

	j = 1;
	k = 2;
	m = 0;

	for (i = 0; i <= 33; ++i)
	{
		if (j < 4000000 && (j % 2) == 0)
		{
			m = m + j;
		}
		l = j + k;
		j = k;
		k = l;
	}
	printf("%lu\n", m);
	return (0);
}
