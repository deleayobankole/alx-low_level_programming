#include <stdio.h>

/* function that concatenates two strings */
char *_strcat(char *dest, char *src);

/* function that concatenates two strings with integer */
char *_strncat(char *dest, char *src, int n);

/* function that copies a string */
char *_strncpy(char *dest, char *src, int n);

/* function that compares a string */
int _strcmp(char *s1, char *s2);

/* function that reverses the content of an array of integers */
void reverse_array(int *a, int n);

/* function that changes all lowercase letters of a string to uppercase. */
char *string_toupper(char *);

/* function that capitalizes all words of a string. */
char *cap_string(char *);

/*  function that encodes a string into 1337 */
char *leet(char *);

/* function that encodes a string using rot13 */
char *rot13(char *);

/* function that prints an integer. */
void print_number(int n);

/*function to print a character*/
int _putchar(char c);

/* function that adds two numbers. */
char *infinite_add(char *n1, char *n2, char *r, int size_r);

/* function that prints a buffer. */
void print_buffer(char *b, int size);

void printASCII(char *b, int start, int end);
void printHexes(char *b, int start, int end);
int isPrintableASCII(int n);
