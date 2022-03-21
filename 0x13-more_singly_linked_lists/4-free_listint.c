#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * free_listint - ...*
 *@head: ...
 *Return: ...
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
	tmp = head;
	head = head->next;
	free(tmp);
	}
}
