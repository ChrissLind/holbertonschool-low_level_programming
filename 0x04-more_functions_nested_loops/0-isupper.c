#include "main.h"

/**
 * _islower - function that checks for lowercase character
 *
 * @c: The letter being checked
 *
 * Return: 1 if c is uppercase, 0 if not.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
