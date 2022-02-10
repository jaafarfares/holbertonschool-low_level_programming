#include "main.h"

/**
* print_line - check the code
*@n: input
* Return: Always 0.
*/
void print_line(int n)
{
	int sum;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sum = 0; sum < n; sum++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
