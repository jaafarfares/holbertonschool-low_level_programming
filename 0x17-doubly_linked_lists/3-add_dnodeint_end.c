#include "lists.h"
/**
*add_dnodeint_end - the function that adds a new node at the back
*@head: the head of the list
*@n: the value in the node
*Return: new node
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last = *head;
	dlistint_t *newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
	{
		newnode->prev = NULL;
		*head = newnode;
		return (newnode);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = newnode;
	newnode->prev = last;
	return (newnode);
}
