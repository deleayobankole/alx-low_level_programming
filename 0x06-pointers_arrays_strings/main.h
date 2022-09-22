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
