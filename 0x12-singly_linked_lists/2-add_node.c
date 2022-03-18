#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - check the code
 *@str: ...
 *@head: ...
 * Return: ....
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int count = 0;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	while (str[count])
		count++;
	new_node->str = strdup(str);
	new_node->len = count;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
