#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Function that returns the number of elements.
 *
 * @h: A pointer.
 *
 * Return: The number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
