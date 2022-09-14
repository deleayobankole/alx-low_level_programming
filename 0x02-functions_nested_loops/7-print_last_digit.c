#include "main.h"
#include "6-abs.c"
/**
 * print_last_digit - tests the sign
 *
 * @r: character to compare
 *
 * Return: 1 if success, 0 otherwise
 *
 */
int print_last_digit(int r)
{
	int last_digit;

	last_digit = _abs(r % 10);

	_putchar('0' + last_digit);

	return (last_digit);
}
