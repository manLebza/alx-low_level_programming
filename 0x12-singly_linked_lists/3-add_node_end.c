#include <stdio.h>
#include "lists.h"

/**
 * add_node_end -> adds new node @ end of list
 * @head: head of linked list
 * @str: string in struct.
 * Return: address of new element in list, or NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *final = *head;
	int n_elemnt = 0;
	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->str = strdup(str);
	n_node->next = NULL;
	if (*head == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (final->next != NULL)
		{
			final = final->next;
		}
		final->next = n_node;
	}
	while (str[n_elemnt])
	{
		n_elemnt++;
	}
	n_node->len = n_elemnt;
	return (n_node);
}
