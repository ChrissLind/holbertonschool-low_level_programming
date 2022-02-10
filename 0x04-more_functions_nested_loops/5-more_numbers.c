#include "main.h"

/**
 * more_numbers - prints zero to fourteen ten times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, k;

	for (i = 0; i <= 9; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			if (k > 9)
				_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
	}

}
