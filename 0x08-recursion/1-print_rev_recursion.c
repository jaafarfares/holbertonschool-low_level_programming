#include "main.h"

/**
 * _print_rev_recursion - check the code
 *@s: pointer type char
 * Return: Always 0.
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
		_putchar('\n');
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
