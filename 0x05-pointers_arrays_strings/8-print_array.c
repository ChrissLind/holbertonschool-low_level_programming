#include "main.h"
#include <stdio.h>

/**
 * print_array - Function that prints n elements of an array of integers.
 *
 * @a: array that is being tested.
 * @n: number of elements.
 *
 * Return: 0
 */

void print_array(int *a, int n)
{
	int l;

	for (l = 0; l < n; l++)
	{
		printf("%d", a[l]);
		if (l != n - 1)
			printf(", ");
	}
	printf("\n");
}
