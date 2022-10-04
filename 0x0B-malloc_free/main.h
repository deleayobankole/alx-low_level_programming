#ifndef _MAIN_H_
#define _MAIN_H_
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>

int _putchar(char);

/* function that creates an array of chars, and initializes it with a specific char  */
char *create_array(unsigned int size, char c)

/* function that returns a pointer to a newly allocated space in memory  */	
char *_strdup(char *str);	

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

char **strtow(char *str);



#endif /* _MAIN_H_ */
