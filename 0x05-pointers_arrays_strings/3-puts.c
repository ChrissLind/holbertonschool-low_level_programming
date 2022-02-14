#include "main.h"

/**
 * _puts - Function that prints a string, followed by a new line.
 *
 *
 * @str: String being printed.
 *
 * Return: 0
 */

void _puts(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
		_putchar(str[i]);
	}
	_putchar('\n');
}
