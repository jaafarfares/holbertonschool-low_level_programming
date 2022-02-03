#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{	
	char a;
	int b;
	long long int d;
	float f;
	printf("Size of int: %zu byte(s)\n", sizeof(b));
	printf("Size of float: %zu byte(s)\n", sizeof(f));
	printf("Size of long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of char: %zu byte(s)\n", sizeof(a));
	return (0);
}
