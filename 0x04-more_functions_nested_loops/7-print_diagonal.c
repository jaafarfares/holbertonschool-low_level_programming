#include "main.h"

/**
* print_diagonal - check the code
* @n: input .
* Return: Always 0.
*/
void print_diagonal(int n)
{
	int i, r;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
	for (r = 0; r < i; i++)
	{
		_putchar(' ');
	}
		_putchar(92);
		_putchar('\n');
	}
	}
	else
	{
		_putchar('\n');
	}
}
