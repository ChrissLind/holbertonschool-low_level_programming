#include "main.h"

/**
 * *_memset - Function that fills memory with a consistant byte.
 *
 * Return: 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;
	return s;
}
