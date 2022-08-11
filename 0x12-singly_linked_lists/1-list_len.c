#include <stdio.h>
#include "lists.h"

/**
 * list_len -> func. to return number of elements
 * in linked list.
 * @h:: pointer pointing to struct.
 * Return: num. of elements
 */

size_t list_len(const list_t *h)
{
	int elemnt;
	
	for (elemnt = 0; h != '\0'; elemnt++)
		h = h->next;
	return (elemnt);
}
