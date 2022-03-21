#include "lists.h"
/**
 * print_listint - Function that returns the elements of a list.
 *
 * @h: List.
 *
 * Return: Elements.
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
