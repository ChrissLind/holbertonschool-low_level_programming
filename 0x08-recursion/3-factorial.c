#include "main.h"

/**
 * factorial - Function that returns the factorial of a given number.
 *
 * @n: number being checked.
 *
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
	{
		n = n * factorial(n - 1);
		return (n);
	}
}
