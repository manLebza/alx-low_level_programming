#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint -> sums all data (n) of doubly linked list
 * @head: head of the list
 * Return: the sum of data
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum)
}
