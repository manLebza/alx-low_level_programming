#include "list.h"

/**
 * add_node -> adds new node to the beginning of list listint_t
 * @head: pointer to pointer of linked list head
 * @n: const int
 * Return: address of new node element, or NULL
 */

listint_t *add_node(listint_t **head, const int n)
{
	listint_t *newhead = NULL;

	newhead = malloc(sizeof(listint_t));
	if (newhead == NULL && n != 0)
		return (NULL);
	newhead->n = n;
	*head = newhead;
	return (newhead);
}
