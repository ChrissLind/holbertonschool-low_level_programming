#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_name - Function that prints a name.
 * @f: Function pointer
 * @name: Name being printed
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if ((name == NULL) || (f == NULL))
		return;
	f(name);
}
