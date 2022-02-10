#include "main.h"

/**
 * _isdigit - function that checks for a number zero through nine
 *
 * @c: The number being checked
 *
 * Return: 1 if c is a digit, 0 if not.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
