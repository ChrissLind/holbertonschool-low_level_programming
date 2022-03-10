#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array.
 * @array: Array of integers.
 * @size: Size of the array.
 * @cmp: Pointer to function that compares values.
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
