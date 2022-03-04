#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* *array_range - prints buffer in hexa
* @min: the address of memory to print
* @max: the size of the memory to print
*
* Return: Nothing.
*/
int *array_range(int min, int max)
{
	int a, *s;

	if (min > max)
		return (NULL);
	s = malloc(sizeof(int) * (max - min) + 4);
	if (s == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
	{
		s[a] = min;
		min++;
	}
	return (s);
}
