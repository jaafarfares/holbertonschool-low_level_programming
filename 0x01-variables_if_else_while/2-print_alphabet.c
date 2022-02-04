#include <stdio.h>
/**
 * main - Entry point
 * Return: Always (0)
 */
int main(void)
{
	char n = 'a';

	do {
		putchar(n);
		n = n + 1;
	} while (n <= 'z');
	putchar('\n');
	return (0);
}
