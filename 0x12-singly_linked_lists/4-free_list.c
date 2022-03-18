#include "lists.h"

/**
 * free_list - Function that frees list_t list.
 *
 * @head: Thing
 *
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
