#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - the function
 * @h: pointer
 * Return: ...
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = NULL;
	size_t list_count = 0;

	if (h != NULL)
	{
		ptr = h;
	}
	while (ptr != NULL)
	{
		list_count++;
		if (h->str == NULL)
		printf("[0] (nil)\n");
		else
		printf("[%d] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		list_count++;
	}
		return (list_count);
}
