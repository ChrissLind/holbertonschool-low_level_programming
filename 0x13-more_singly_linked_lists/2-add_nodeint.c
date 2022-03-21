#include "lists.h"

/**
 * add_nodeint - Function that adds a node at the beginning of a list.
 *
 * @n: A pointer to the address of the head.
 * @head: The integer of the new node.
 *
 * Return: The number of elements in the linked list.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);

}
