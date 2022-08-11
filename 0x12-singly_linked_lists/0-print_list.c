#include "lists.h"

/**
 * print_list -> prints elements of list
 * @h: pointer to struct.
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int num_n = 0;

	while (h != '\0')
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] %p\n", h->str);
		}
		h = h->next;
		num_n++;
	}
	return (num_n);
}
