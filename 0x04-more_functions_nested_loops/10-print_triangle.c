#include "main.h"
/**
 *
 * print_triangle - Function that prints a triangle.
 * @size: size of the triangle.
 * Return: 0
 */

void print_triangle(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= size; y++)
		{
			if (y <= size - x)
				_putchar(' ');
			else 
				_putchar('#');
		}
		_putchar('\n');
	}
}
