#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - the function prints all elments of a list
 * @h: pointer
 * Return: ...
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t list_count = 0;

	while (ptr)
	{
		if (!ptr->str)
			printf("[%i] %s\n", 0, "(nil)");
		else
			printf("[%i] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		list_count++;
	}
		return (list_count);
}
