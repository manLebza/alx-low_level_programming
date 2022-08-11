#include "lists.h"

/**
 * print_list -> prints elements of list
 * @h: pointer to struct.
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int num_n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		num_n++;
	}
	return (num_n);
}
