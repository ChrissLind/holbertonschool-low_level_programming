#include "main.h"

/**
 * _isalpha - function that checks if a character is in the alphabet
 *
 * @c: this is the character
 *
 * Return: 1 if c is lower or uppercase, 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else
		return (0);
	_putchar('\n');
}
