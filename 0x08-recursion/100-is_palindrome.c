#include "main.h"
/**
 * _strlen - finds string length
 * @s: pointer to string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen(++s));
}
/**
 * palitest - tests the palindrome
 * @s: pointer to test string
 * @a: position of string
 * Return: boolean
 */
int palitest(char *s, int a)
{
	if (a < 1)
		return (1);
	if (*s == *(s + a))
		return (palitest(s + 1, a - 2));
	return (0);
}
/**
 * is_palindrome - checks if string is palindrome
 * @s: pointer to test string
 * Return: recursion - boolean
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (palitest(s, len - 1));
}
