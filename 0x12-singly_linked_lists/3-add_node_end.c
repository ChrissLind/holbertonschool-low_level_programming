#include "lists.h"
#include <string.h>

/**
 * add_node_end - Function that adds a new node to the end.
 *
 * @head: Pointer to the first node.
 * @str: Pointer to the string.
 *
 * Return: Head.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	int len;
	char *dupe;

	new = (malloc(sizeof(list_t)));
	if (new == NULL)
		return (NULL);

	dupe = strdup(str);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len]; len++)
		;

	new->str = dupe;
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
