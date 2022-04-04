#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_triangle - a function that prints a triangle.
 *@size: the size of the triangle.
 *Return: ....
 *
*/
void print_triangle(int size)
{
	int a, i;

	for (a = 0; a < size; a++)
	{
		for (i = 0; i < size; i++)
		{
		if (i < size - a - 1)
		{
			_putchar(' ');
		}
		else
			{
				_putchar('#');
			}
		}
		if (size <= 0)
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
