#include "lists.h"

/**
 * list_len - Function that returns the number of elements in a linked list.
 *
 * @h: Pointer to a node.
 *
 * Return: Number of nodes.
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
