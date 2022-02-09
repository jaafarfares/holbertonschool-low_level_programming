#include "main.h"
/**
 * times_table - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	int i, n, s, c, e;

	for (i = 0; i < 10; i++)
	{
	for (n = 0; n < 10; n++)
	{
	s = i * n;
	c = s / 10;
	e = s % 10;
	if (n == 0)
	{
		_putchar('0');
	}
		else if (s < 10)
		{
			_putchar(' ');
			_putchar('0' + c);
		}
		else
		{
		_putchar('0' + e);
		_putchar('0' + c);
		}
		if (n < 9)
		{
		_putchar(',');
		_putchar(' ');
		}
		else
		{
			_putchar('\n');
		}
	}
	}
}
