#include <stdio.h>
#include "lists.h"

/**
 * add_node -> adds new node in begining of list
 * @head: head of node
 * @str: string in struct.
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	int  n_elemnt = 0;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
		return (NULL);

	n_node->str = strdup(str);
	while (str[n_elemnt])
	{
		n_elemnt++;
	}
	n_node->len = n_elemnt;
	n_node->next = *head;
	*head = n_node;

	return (*head);
}
