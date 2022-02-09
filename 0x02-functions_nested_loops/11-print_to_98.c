#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Function that prints all natural numbers form n to 98,
 * followed by a new line.
 *
 * @n: Starting number.
 *
 * Return: none.
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
	}
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
	printf("98\n");
}
