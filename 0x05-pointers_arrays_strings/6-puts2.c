#include "main.h"

/**
 * puts2 - Function that prints every other character of a string, start with
 * first number.
 *
 * @str: String being printed
 *
 * Return: 0
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
