#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len -> checks the number of elements in doubly linked list
 * @h: head of the list
 * Return: The number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
