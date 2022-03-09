#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Function that prints a name.
 * @f: Function pointer
 * @name: Name being printed
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
