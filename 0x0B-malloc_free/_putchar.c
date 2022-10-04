#include <unistd.h>
/**
 * _putchar - write a charactter
 * @c: xter to print
 * Return: xter
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
