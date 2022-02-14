#include "main.h"

/**
 * swap_int - Function that swaps the value of two integers.
 *
 * @a: First integer
 * @b: Second integer
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
