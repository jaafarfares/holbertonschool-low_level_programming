#include "main.h"
#include <stdlib.h>

/**
* *malloc_checked - check the code
*@b: integer
* Return: always ptr.
*/
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	exit(98);

	return (ptr);
}
