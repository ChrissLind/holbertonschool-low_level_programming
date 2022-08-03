#include <stdio.h>

/**
 * main - program that prints the alphabet in reverse
 *
 * Return: 0
 */

int main(void)
{
	char al;

	for (al = 'z'; al >= 'a'; al--)
		putchar(al);

	putchar('\n');

	return (0);
}
