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
	size_t n;

	for (n = 0; (n < index) && (head->next); n++)
	head = head->next;

	if (n < index)
	return (NULL);


	return (head);
}
