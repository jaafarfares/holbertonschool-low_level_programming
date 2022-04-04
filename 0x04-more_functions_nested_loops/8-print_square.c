#include "main.h"

/**
* print_square - a function that prints a square.
*@size: the size of the square.
* Return: Always 0.
*/
void print_square(int size)
{
	int i, c;

	for (i = 0; i < size; i++)
	{
		for (c = 0; c < size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
