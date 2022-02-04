#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return (0)
 */

int main(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		putchar(al);
		if (al == 'z')
		{
			putchar('\n');
		}
	}
	return (0);
}
