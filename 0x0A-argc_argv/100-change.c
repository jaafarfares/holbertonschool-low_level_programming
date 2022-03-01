#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <math.h>

/**
* main - argv and argc programme
*@argc: unused varible
*@argv: argument value
* Return: always 0.
*/
int main(int argc, char *argv[])
{
	int a, n, i, r;
	int c[] = {25, 10, 5, 2, 1,};

	r = 0;
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	i = atoi(argv[1]);
	if (i < 1)
		printf("0\n");
	else
	{
		for (a = 0; a < 5 && i; i++)
		{
			n = i / c[a];
			r += n;
			i = n * c[a];
		}
		printf("%d\n", r);
	}
	return (0);
}
