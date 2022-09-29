#include <stdio.h>

/* the function prototypes reside here */

/* print a character */
int _putchar(char c);

/* function that prints a string, followed by a new line. */
void _puts_recursion(char *s);

/* function that prints a string in reverse */
void _print_rev_recursion(char *s);

/*function that returns string length */
int _strlen_recursion(char *s);

/* function to return factorial of a number */
int factorial(int n);

/* function that retruns the value of x raise to the power of y */
int _pow_recursion(int x, int y);

/* return the square root */
int _sqrt_recursion(int n);

/* tests for prime number */
int is_prime_number(int n);

/* function that returns 1 if a string is a palindrome and 0 if not.*/
int is_palindrome(char *s);

/* function that compares two strings and returns 1 if */
/* the strings can be considered identical, otherwise return 0 */
int wildcmp(char *s1, char *s2);
