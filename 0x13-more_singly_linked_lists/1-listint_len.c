#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * listint_len - function  that returns the number of elements
 * @h: pointer
 * Return: ...
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *ptr = h;
	size_t list_count = 0;

	while (ptr)
	{
		list_count++;
		ptr = ptr->next;
	}
	return (list_count);
}
