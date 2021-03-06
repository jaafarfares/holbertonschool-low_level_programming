#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - check the code
 *@n: ...
 *@head: ...
 * Return: ....
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *a = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
	*head = new_node;
	return (new_node);
	}
	while (a->next != NULL)
	a = a->next;
	a->next = new_node;
	return (new_node);
}
