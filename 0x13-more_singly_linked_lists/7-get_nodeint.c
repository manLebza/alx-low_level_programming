#include "lists.h"

/**
 * get_nodeint_at_index -> returns nth node from listint_t
 * @index: index to node at  [0]
 * @head: pointer to pointer at head of linked list
 * Return: nth node of listint_t, or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int x = 0;

	while (current != NULL)
	{
		if (x == index)
			return (current);
		x++;
		current = current->next;
	}
	return (NULL);
}
