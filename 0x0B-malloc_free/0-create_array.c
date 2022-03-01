#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* *create_array - prints buffer in hexa
* @c: the address of memory to print
* @size: the size of the memory to print
*
* Return: Nothing.
*/
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *i = (char *)malloc(sizeof(char) * size);

	if (size == 0)
		return (NULL);
	if (i == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
	{
		i[a] = c;
	}
	return (i);
}
