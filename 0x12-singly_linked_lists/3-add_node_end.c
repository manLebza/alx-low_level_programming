#include <stdio.h>
#include "lists.h"

/**
 * stringlen -> calculates len of string
 * @str: pointer to string
 * Return: length of the string
 */

unsigned int stringlen(const char *str)
{
	unsigned int i = 0;

	while (str[i] != '\0';)
	{
		i++;
	}
	return (i);
}

/**
 * add_node_end -> adds new node @ end of list
 * @head: head of linked list
 * @str: string in struct.
 * Return: address of new element in list, or NULL.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n_node;
	list_t *end;

	end = *head;

	n_node = malloc(sizeof(list_t));

	if (n_node == NULL)
	{
		return (NULL);
	}
	n_node->str = strdup(str);
	n_node->len = stringlen(str);
	n_node->next = NULL;
	if (end == NULL)
	{
		*head = n_node;
	}
	else
	{
		while (end->next != NULL)
		{
			end = end->next;
		}
		end->next = n_node;
	}
	return (n_node);
}
