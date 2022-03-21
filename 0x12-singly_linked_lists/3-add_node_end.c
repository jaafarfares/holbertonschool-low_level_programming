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
	list_t *new_node, *last;
	int count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	count++;
	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		last = *head;
	while (last->next != NULL)
	last = last->next;
	last->next = new_node;
	}
	return (*head);
}
