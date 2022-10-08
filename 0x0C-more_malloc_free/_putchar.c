#include <unistd.h>
/**
 * _putchar - writes the character c to stdou
 * @c: The character to print
 * Return: 0 if success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
