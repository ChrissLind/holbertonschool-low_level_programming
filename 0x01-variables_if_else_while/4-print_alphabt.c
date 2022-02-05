#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char al;

	for (al = 'a' ; al <= 'z' ; al++)
	{
		if (al != 'a' && al != 'e')
			putchar(al);
	}
	putchar('\n');

	return (0);
}
