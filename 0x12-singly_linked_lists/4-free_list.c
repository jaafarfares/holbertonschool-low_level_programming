#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * free_list - ...function -_-
 *@head: ...
 *Return: ...
 */
void free_list(list_t *head)
{
	list_t *list;

	while (head)
	{
	list = head->next;
	free(head->str);
	free(head);
	head = list;
	}
}
