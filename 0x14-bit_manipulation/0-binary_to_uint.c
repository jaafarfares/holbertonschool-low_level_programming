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

	while (b[i] == '0' || b[i] == '1')
	{
		decimal <<= 1;
		decimal += b[i] - '0';
		i++;
	}
	if (b == NULL || b[i] != '1' || b[i] != '0')
		return (decimal);
	else
	{
		return (0);
	}
	return (decimal);
}
