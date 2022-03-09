#include <stdio.h>
#include "function_pointers.h"

/**
*array_iterator - prints an integer
*@array: the integer to print
*@size:the size of the array
*@action: is a pointer to the function
*Return: Nothing.
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array && action && size > 0)
		while (a < size)
		{
			action(array[a]);
			a++;
		}
}
