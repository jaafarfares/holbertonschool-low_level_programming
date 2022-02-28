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
	int a, n, i = 0;

	for (a = 1; a < argc; a++)
	{
		for (n = 0; argv[a][n]; n++)
		{
			if (isdigit(argv[a][n]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (a = 1; a < argc; a++)
	{
		{
		i += atoi(argv[a]);
		}
	}
	printf("%d\n", i);
	return (0);
}
