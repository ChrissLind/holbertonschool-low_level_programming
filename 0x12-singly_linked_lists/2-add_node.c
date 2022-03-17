#include "lists.h"
#include <string.h>

/**
 * add_node - Function that adds a new node.
 *
 * @head: Pointer to the first node.
 * @str: Pointer to the string.
 *
 * Return: Address of the new element.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len;
	char *dupe;

	new = (malloc(sizeof(list_t)));
	if (new == NULL)
		return (NULL);
	dupe = strdup(str);
	if (dupe == NULL)
	{
		free(new);
		return (NULL);
	}
	for (len = 0; str[len]; len++)
		;
	new->str = dupe;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
