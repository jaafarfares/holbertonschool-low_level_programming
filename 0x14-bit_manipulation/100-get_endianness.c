#include <stdio.h>
#include "main.h"
/**
 * get_endianness - ...
 *Return: ....
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *b;

	b = (char *)&x;
	if (*b)
	return (1);
	else
	return (0);
}
