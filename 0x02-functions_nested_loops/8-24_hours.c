#include"main.h"
/**
* jack_bauer - for alphabetic character.
* Return: Always 0.
*/
void jack_bauer(void)
{
	int n, i;

	for (n = 0; n < 24; n++)
	{
		for (i = 0; i < 60; i++)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
			_putchar(':');
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar('\n');
		}
	}
}
