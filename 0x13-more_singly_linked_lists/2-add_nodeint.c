#include "lists.h"

/**
 * add_nodeint -> adds new node to the beginning of list listint_t
 * @head: pointer to pointer of linked list head
 * @n: const int
 * Return: address of new node element, or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newhead = NULL;

	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL && n != 0)
		return (NULL);
	newhead->n = n;
	newhead->next = *head;
	*head = newhead;
	return (newhead);
}
