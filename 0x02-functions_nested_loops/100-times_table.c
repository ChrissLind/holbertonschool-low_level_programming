#include "main.h"

/**
 * print_times_table - function that prints the times table of n
 * if n is less than fifteen and more than zero.
 *
 * @n: variable for the function
 *
 */

void print_times_table(int n)
{
	int a, b, product;

	if (n < 16 && n >= 0)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (b = 1; b <= n; b++)
			{
				product = a * b;
				_putchar(',');
				_putchar(' ');
				if (product <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(product + '0');
				}
				else if (product <= 99)
				{
					_putchar(' ');
					_putchar((product / 10) + '0');
					_putchar((product % 10) + '0');
				}
				else
				{
					_putchar(((product / 100) % 10) + '0');
					_putchar(((product / 10) % 10) + '0');
					_putchar((product % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
