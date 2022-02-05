#include <stdio.h>

/**
 * main - program that prints all numbers of base16 in lowercase
 *
 * Return: 0
 */

int main(void)
{
	char al;

	for (al = '0'; al <= '9'; al++)
	{
		putchar(al);
	}
	for (al = 'a'; al <= 'f'; al++)
	{
		putchar(al);
	}

	putchar('\n');

	return (0);
}
