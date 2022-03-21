#include "lists.h"
/**
 * list_len - Function that returns the elements of a list.
 *
 * @list_t: List.
 *
 * Return: Elements.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
