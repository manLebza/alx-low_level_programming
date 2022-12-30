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
	listint_t *currentnode;
	listint_t *newnode;
	unsigned int x;

	currentnode = *head;

	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && currentnode != NULL; x++)
		{
			currentnode = currentnode->next;
		}
	}
	if (currentnode == NULL && idx != 0)
		return (NULL);

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->next = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		newnode->next = currentnode->next;
		currentnode->next = newnode;
	}
	return (newnode);
}
