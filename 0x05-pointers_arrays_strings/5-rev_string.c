#include "main.h"

/**
 * rev_string - Function that reverses a string.
 *
 * @s: String being reversed.
 *
 * Return: 0
 */

void rev_string(char *s)
{
	int i, c, x, y;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	x = 0;
	y = i - 1;

	while (x < y)
	{
		c = s[x];
		s[x] = s[y];
		s[y] = c;
		x++;
		y--;
	}
}
