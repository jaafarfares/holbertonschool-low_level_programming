#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - lets check the code
 *@b: ....
 * Return: ....
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int i = 0;

	if (b == NULL)
	return (0);
	if (b[i] != '0' || b[i] != '1')
		return (0);
	while (b[i] == '0' || b[i] == '1')
	{
		decimal <<= 1;
		decimal += b[i] - '0';
		i++;
	}
	return (decimal);
}
