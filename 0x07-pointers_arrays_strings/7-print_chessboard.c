#include "main.h"
#include <stdio.h>

/**
* print_chessboard - check the code
*@a:char
* Return: Always 0.
*/
void print_chessboard(char (*a)[8])
{
	int n, r;

	for (n = 0; n < 8; n++)
	{
		for (r = 0; r < 8; r++)
		{
			_putchar(a[n][r]);
		}
		_putchar('\n');
	}
}
