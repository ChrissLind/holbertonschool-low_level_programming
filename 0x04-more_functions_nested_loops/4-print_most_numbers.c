#include "main.h"

/**
 * print_most_numbers - function that prints numbers zero to nine
 *
 * Return: 0
 */

void print_most_numbers(void)
{
	int n;

	n = 0;

	{
		for (n = n; n <= 9; n++)
			if ((n != 2) && (n != 4))
			{
				_putchar(n + '0');
			}
	}
	_putchar('\n');
}
