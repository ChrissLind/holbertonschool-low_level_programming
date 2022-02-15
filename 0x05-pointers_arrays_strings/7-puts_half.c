#include "main.h"

/**
 * puts_half - Function that prints half of a string.
 *
 * @str: string being printed.
 *
 * Return: 0
 */

void puts_half(char *str)
{
	int i, e, n;
	for (i = 0; str[i] != '\0'; i++)
		/*NULL STATEMENT*/	;
	if ((i % 2) == 0)
	{
		for (e = i / 2; str[e] != '\0'; e++)
			_putchar(str[e]);
	}
	else
	{
		for (n = (i - 1) / 2; str[n] != '\0'; n++)
			_putchar(str[n + 1]);
	}
	_putchar('\n');
}
