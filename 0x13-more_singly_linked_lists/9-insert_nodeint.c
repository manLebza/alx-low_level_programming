#include "lists.h"

/**
 * insert_nodeint_at_index -> inserts new node at given position
 * @head: pointer to pointer at head of listint_t
 * @n: int data
 * @idx: unsigned int index
 * Return: address of new element,or NULL (unsuccessful).
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node;
	listint_t *new_node;

	while (*head)
	{
		new_node = malloc(sizeof(listint_t));
		current_node = *head;
		new_node->n = n;

		if (idx == 0)
		{
			new_node->next = NULL;
			return (new_node);
		}
		while (current_node->next != NULL && idx - 1 > 0)
		{
			current_node = current_node->next;
			idx--;
		}
		if (current_node->next == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = current_node->next;
		current_node->next = new_node;
		return (new_node);
	}
	return (NULL);
}
