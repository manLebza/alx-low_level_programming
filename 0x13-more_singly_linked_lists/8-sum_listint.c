#include "lists.h"

/**
 * sum_listint -> sums all data of listint_t
 * @head: pointer to pointer at head of listint_t
 * Return: sum of all data or NULL
 */

int sum_listint(listint_t *head)
{
	int x = 0;

	while (head)
	{
		x += head->n;
		head = head->next;
	}
	return (x);
}
