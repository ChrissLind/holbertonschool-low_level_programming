#include "main.h"

/**
 * leet - converts a string into leet speak.
 * @a: The string we are converting.
 * Return: 0
 */

char *leet(char *a)
{
	int x = 0, y = 0, n[5] = {4, 3, 0, 7, 1};
	char letters[10] = "AaEeOoTtLl";

	for (; a[x]; x++)
	{
		for (y = 0; (a[x] != letters[y] && y < 10); y++)
			;
		if (a[x] == letters[y])
		{
			y /= 2;
			a[x] = (n[y] + '0');
		}
	}
	return (a);
}
