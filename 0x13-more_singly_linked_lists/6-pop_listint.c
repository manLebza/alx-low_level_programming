#include "lists.h"

/**
 * pop_listint -> deletes head of node in listint_t
 * @head: pointer to pointer of the head in listint_t
 * Return: data of head node, or NULL
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (*head == NULL)
		return (0);
	temp = *head;
	*head = temp->next;
	x = temp->n;
	free(temp);
	return (x);
}
