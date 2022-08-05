#include "main.h"

/**
 * main - Function that prints the string "_putchar"
 *
 * Return: Function _putchar.c that prints a newline character.
 */

int main(void)
{
	char string[] = "_putchar";
	int i;

	for (i = 0; string[i] != '\0'; i++)
	{
		_putchar(string[i]);
	}
	return (_putchar('\n'));
	return (0);
}
