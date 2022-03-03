#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Function that concatenates two strings.
 *
 * @s1: String one.
 * @s2: String two.
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int i, j, size;
	char *c;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	size = i + j + 1;
	c = malloc(sizeof(char) * size);
	if (c == 0)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		*(c + i) = *(s1 + i);
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		*(c + i + j) = *(s2 + j);
	}

	return (c);

}
