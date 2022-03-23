#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - check the code
 *@head: ...
 * Return: Always 0.
 */
int pop_listint(listint_t **head)
{
	int sum;
	listint_t *ptr = *head;

	if (ptr == 0)
	{
		return (0);
	}
	sum = ptr->n;
	*head = (*head)->next;
	free(ptr);
	return (sum);
}
