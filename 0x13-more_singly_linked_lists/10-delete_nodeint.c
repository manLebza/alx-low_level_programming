#include "lists.h"

/**
 * delete_nodeint_at_index -> deletes node at given position
 * @head: pointer to pointer at head of listint_t
 * @index: unsigned int index pos.
 * Return: 1 if successful, -1 or NULL if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *next;
	unsigned int x;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (x = 0; temp != NULL && x < index - 1; x++)
		temp = temp->next;

	if (temp == NULL || temp->next == NULL)
		return (-1);

	next temp->next->next;
	free(temp->next);
	temp->next = next;
	return (1);
}
