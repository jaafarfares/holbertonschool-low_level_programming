#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
* main - Entry point
* Return: Always (0)
*/
int main(void)
{
	char n;
	int k;

	for (n = 0; n < 10; n++)
		putchar(n % 10 + '0');
	for (k = 'a' ; k < 'g'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
