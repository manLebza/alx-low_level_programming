#include "lists.h"

/**
 * listint_len -> returns num of elements in listint_t list
 * @h: const listint_t pointer to head of list
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		h = h->next;
	}
	return (x);
}
