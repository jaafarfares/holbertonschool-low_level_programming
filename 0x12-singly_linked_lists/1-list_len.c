#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
* list_len - function  that returns the number of elements
* @h: pointer
* Return ...
*/
size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t list_count = 0; 

	while (ptr != NULL)
		list_count++;
	return(list_count);
}
