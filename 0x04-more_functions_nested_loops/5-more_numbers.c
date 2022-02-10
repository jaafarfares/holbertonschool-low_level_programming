#include "main.h"

/**
* more_numbers - check the code
*
* Return: Always 0.
*/
void more_numbers(void)
{
	int x;
	int n;

	for (x = 0; x <= 9; x++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			_putchar('0' + (n / 10));
			_putchar('0' + (n % 10));
		}
		_putchar('\n');
	}
}
