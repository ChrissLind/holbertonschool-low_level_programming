#include "lists.h"

/**
 * sum_listint - Calculates the sum of all data.
 * @head: Pointer to the head node.
 * Return: Sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
