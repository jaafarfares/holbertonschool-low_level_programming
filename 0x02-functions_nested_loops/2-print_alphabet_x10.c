#include "main.h"
/**
 * print_alphabet_x10 - writes the character c to stdout
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{

	int n;

	for (n = 1; n <= 10; n++)
	{char c;
	for (c = 97; c <= 122; c++)
	{
		_putchar(c);
	}
		_putchar('\n');
	}

}
