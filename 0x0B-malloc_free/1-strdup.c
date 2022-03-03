#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated space in
 * memory, which contains a copy of the string given as a parameter.
 *
 * @str: String
 *
 * Return: 0
 */

char *_strdup(char *str)
{
	int i, length;
	char *dup;

	if (str == NULL)
		return (NULL);
	for (length = 0; str[length] != '\0'; length++)
		;
	dup = malloc(sizeof(char) * length + 1);
	if (dup == NULL)
		return (NULL);
	for (i = 0; i < length; i++)
		dup[i] = str[i];
	return (dup);
}
