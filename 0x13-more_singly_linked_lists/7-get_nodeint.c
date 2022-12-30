#include "lists.h"

/**
 * get_nodeint_at_index -> returns nth node from listint_t
 * @index: index to node at  [0]
 * @head: pointer to pointer at head of linked list
 * Return: nth node of listint_t, or NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n;

	for (n = 0; n < index && head != NULL; n++)
	{
		head = head->next;
	}
	return (head);
}
