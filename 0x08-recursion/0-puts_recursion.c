#include "main.h"
/**
 * _puts_recursion - Function that prints a string, followed by a new line.
 *
 * @s: String
 *
 * Return: 0
 */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
		_putchar('\n');

}
