#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - check the code
 *@head: ...
 * Return: ....
 */
void free_listint2(listint_t **head)
{
	listint_t *a, tmp;

	if (head == NULL)
		return;
	tmp = *head;
	while (tmp)
	{
		a = tmp;
		tmp = tmp->next;
		free(a);
	}
	*head = NULL;
}
