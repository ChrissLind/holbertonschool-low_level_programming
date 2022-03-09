#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Author: Chris Lind
 * Description: Header file containing prototypes for functions.
 */

int _putchar(char c);
void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);

#endif
