#include "main.h"
/**
 * print_line - function that draws a straight line.
 *@n: number that determines how long the line is.
 * Return: 0
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
