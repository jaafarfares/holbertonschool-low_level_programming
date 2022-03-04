#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *_calloc - prints buffer in hexa
* @nmemb: the address of memory to print
* @size: the size of the memory to print
*
* Return: Nothing.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int a;

	if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
	{
		p[a] = 0;
	}
	return (p);
}
