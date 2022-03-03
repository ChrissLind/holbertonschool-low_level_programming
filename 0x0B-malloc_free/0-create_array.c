#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Function that creates an array of chars.
 *
 * @size: size
 * @c: character
 *
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size <= 0)
		return (NULL);
	p = malloc(size * sizeof(c));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	return (p);
}
