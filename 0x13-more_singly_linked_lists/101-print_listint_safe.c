#include "lists.h"

/**
 * free_listp -> frees listp
 * @head: head of listp
 * Return: void
 */

void free_listp(listp_t **head)
{
	listp_t *curnt;
	listp_t *temp;

	if (head != NULL)
	{
		curnt = *head;
		while ((temp = curnt) != NULL)
		{
			curnt = curnt->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe -> prints listint_t list
 * @head: head of list
 * Return: number of nodes in listint_t
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;

	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;
		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (nnodes);
			}
		}
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		nnodes++;
	}
	free_listp(&hptr);
	return (nnodes);
}
