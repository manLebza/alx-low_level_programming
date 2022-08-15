#include "lists.h"

/**
 * add_nodeint_end -> adds new node at the end of the list listint_t
 * @head: pointer to pointer of the head of list
 * @n: const int
 * Return: address of new element, or NULL
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last = *head;
	listint_t *new_node = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL && n != 0)
		return (0);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
