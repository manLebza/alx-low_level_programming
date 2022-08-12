#include "lists.h"

/**
 * _strlen -> gets string length
 * @s: the string
 * Return: length of the string
 */

int _strlen(const char *s)
{
	int x;

	for (x = 0; s[x]; x++)
		;
	return (x);
}

/**
 * add_node -> adds new node in begining of list
 * @head: head of node
 * @str: string in struct.
 * Return: address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *n_node;
	char *content;
	int  n_elemnt, x;

	if (str == NULL || head == NULL)
		return (NULL);
	n_elemnt = _strlen(str);
	new = *head;
	content = malloc((n_elemnt + 1) * sizeof(char));

	if (content == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		content[x] = str[x];
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		free(content);
		return (NULL);
	}
	new->str = content;
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
