#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <math.h>

/**
 * print_number - ....
 *@n: ....
 *Return: ....
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		}
	if (n != 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}
