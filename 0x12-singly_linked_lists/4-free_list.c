#include <stdio.h>
#include "lists.h"

/**
 * free_list -> frees list
 * @head: head to linked list
 * Return: void
 */

void free_list(list_t *head)
{
	if (head != NULL)
	{
		free(head->str);
		free_list(head->next);
	}
	free(head);
}
