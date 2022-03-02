#include "main.h"

/**
 * _strlen - function that prints the len
 *
 *
 * @s: String
 *
 * Return: 0
 */

int _strlen(char *s)
{
	int i;

	i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
