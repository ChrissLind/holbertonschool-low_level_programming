#include "main.h"
#include <stdio.h>

/**
 *
 * print_diagsums - Function that prints the sum of two diagonals
 * of a square matrix of integers. 
 *
 * @a: The matrix
 * @size: Size of matrix
 *
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int element, sum1 = 0, sum2 = 0;

	for (element = 0; element < size; element++)
	{
		sum1 = sum1 + a[element];
		a = a + size;
	}

	a = a - size;

	for (element = 0; element < size; element++)
	{
		sum2 = sum2 + a[element];
		a = a - size;
	}

	printf("%d, %d\n", sum1, sum2);
}
