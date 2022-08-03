#include <stdio.h>

/**
 * main - program that prints the alphabet in lower then uppercase
 *
 * Return: 0
 */

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
		putchar(al);

	for (al = 'A'; al <= 'Z'; al++)
		putchar(al);

	putchar('\n');

	return (0);
}
