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
	if (index > 64)
		return (-1);
	n = (~(1 << index) & n);
	return (1);
}
