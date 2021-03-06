#include <stdio.h>
#include "main.h"

/**
 * get_bit - check the code
 *@n: ...
 *@index: ....
 * Return: ...
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	if (((1 << index) & n) == 0)
	return (0);
	else
		return (1);
}
