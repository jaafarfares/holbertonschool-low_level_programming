#include"main.h"
/**
* print_last_digit - for alphabetic character.
* @c: input
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/
int print_last_digit(int c)
{
	int lg;

	lg = c % 10;
		if (lg < 0)
	{
		lg = lg * (-1);
	}
	_putchar ('0' + lg);
	return (lg);
}
