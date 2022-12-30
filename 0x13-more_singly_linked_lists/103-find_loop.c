#include "lists.h"

/**
 * find_listint_loop -> finds loop contained in list_t
 * @head: head pointer of list_t
 * Return: pointer to node where the loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *n1, *node2;

	n1 = head;
	node2 = head;

	while (head && n1 && n1->next)
	{
		head = head->next;
		n1 = n1->next->next;

		if (head == n1)
		{
			head = node2;
			node2 = n1;
			while (1)
			{
				n1 = node2;
				while (n1->next != head && n1->next != node2)
				{
					n1 = n1->next;
				}
				if (n1->next == head)
					break;

				head = head->next;
			}
			return (n1->next);
		}
	}
	return (NULL);
}
