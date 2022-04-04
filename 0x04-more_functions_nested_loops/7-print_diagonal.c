#include "main.h"
#include<stdio.h>
/**
* print_diagonal - a function print a degional line
* @n: is the number of lines should be printed
* Return: Always 0.
*/
void print_diagonal(int n)
{
	int i, r;

	for (i = 0; i < n; i++)
	{
		for (r = 0; r < i; r++)
		{
			_putchar(' ');
		}
		_putchar(92);
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
