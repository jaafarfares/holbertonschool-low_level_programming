#include <stdio.h>
#include "main.h"

/**
 * flip_bits - check the code
 *@n: ...
 *@m: .....
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int last_bit_n, last_bit_m;

	while (n || m)
	{
	last_bit_n = n & 1;
	last_bit_m = m & 1;
	if (last_bit_n != last_bit_m)
	count++;
	}
	return (count);
}
