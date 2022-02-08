#include "main.h"

/**
 * print_alphabet_x10 - function that prints the aplhabet
 *
 */

void print_alphabet_x10(void)
{
	char al;
	int cn;

	for (cn = 1; cn <= 10; cn++)

	{
		for (al = 'a'; al <= 'z'; al++)

		{
			_putchar(al);
		}

		_putchar('\n');
	}
}
