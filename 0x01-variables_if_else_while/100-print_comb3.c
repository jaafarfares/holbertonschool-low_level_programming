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
	int n;
	
	for (n = 0; n < 90; n++)
	{
		putchar((n % 10) + '0');
		if (n <= 89)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
