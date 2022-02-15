#include "main.h"

/**
* print_array - check the code for
*@a: int
*@n: int
* Return: Always 0.
*/
void print_array(int *a, int n)
{
	int r;

	for (r = 0; r < n; r++)
	{
		printf("%d", a[r]);

	if (r != (n - 1))
		printf(", ");
	}
	printf("\n");
}
