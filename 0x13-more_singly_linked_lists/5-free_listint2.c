#include "lists.h"

/**
 * free_listint2 - Frees a list.
 *
 * @head: Head node.
 * Return: 0
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;
	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
