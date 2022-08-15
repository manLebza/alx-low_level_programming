#include "lists.h"

/**
 * print_listint -> prints all elements of listint_t list.
 * @h: const listint_t pointer to head
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int x;

	for (x = 0; h != NULL; x++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (x);
}
