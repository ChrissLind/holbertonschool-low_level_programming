#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Function that executes a function given as a
 * parameter on each element of an array.
 * @action: Function pointer.
 * @array: Array of integers.
 * @size: Size.
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int length;

	if ((array == NULL) || (size == 0) || (action == NULL))
		return;
	for (length = 0; length < size; length++)
		action(array[length]);

}
