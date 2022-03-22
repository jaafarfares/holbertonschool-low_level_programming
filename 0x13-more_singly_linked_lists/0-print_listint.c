#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint - the function prints all elments of a list
 * @h: pointer
 * Return: ...
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t list_count = 0;

	while (ptr)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		list_count++;
	}
	return (list_count);
}
