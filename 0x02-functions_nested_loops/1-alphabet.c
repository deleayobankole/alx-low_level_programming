#include "main.h"
/**
 * print_alphabet - prints the alphabet
 *
 * Return: 0 if success
 *
 */
void print_alphabet(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		_putchar(alp);
	}

	_putchar('\n');
}
