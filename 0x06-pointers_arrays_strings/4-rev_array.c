#include "main.h"

/**
 * reverse_array - Function that reverses the content of an array of integers.
 * @a: Array.
 * @n: elements in the array.
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int c = 0, s, r = n - 1;

	while (c < r)
	{
		s = a[c];
		a[c] = a[r];
		a[r] = s;
		c++;
		r--;
	}
}
