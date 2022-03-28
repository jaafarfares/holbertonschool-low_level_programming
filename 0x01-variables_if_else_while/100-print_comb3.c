#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - ...
 *
 *Return: ...
 */
int main(void)
{
	int n, a;

	for (n = 0; n < 9; n++)
	{
		for (a = 1; a < 10; a++)
		{
		putchar(n  + '0');
		putchar(a  + '0');
		if (n < 8 || a < 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
