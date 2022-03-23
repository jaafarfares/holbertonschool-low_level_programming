#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - check the code
 *@str: ...
 *@head: ...
 * Return: ....
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (str == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (last->next != NULL)
	{
	last = last->next;
	}
	last->next = new_node;
	return (new_node);
}
