#include "lists.h"

/**
 * free_listint2 -> frees listint_t list,sets to NULL
 * @head: pointer to pointer of the head of the list
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node;
	listint_t *temp;

	if (!head)
		return;
	node = *head;
	while (*head)
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp);
			*head = NULL;
		}
}
