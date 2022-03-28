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
		for (a = 1; a <= 9; a++)
		{
		putchar((n % 10) + '0');
		putchar(a + '0');
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	return (0);
}
