#include "main.h"

/**
 * print_last_digit - Function that prints the last digit of a number
 *
 * @n: Number we are printing the last digit of.
 *
 * Return: The last digit.
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
		n = n * -1;

	_putchar(n + '0');

	return (n);
}
