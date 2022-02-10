#include "main.h"

/**
 * more_numbers - prints zero to fourteen ten times
 *
 */

void more_numbers(void)
{
	int i, k;
	for (i = 0; i < 15; i++)
	{
		for (k = i; k >= 0; k--)
		{
			_putchar(k + '0');
		}
		_putchar(i + '0');
	_putchar('\n');
	}
}
