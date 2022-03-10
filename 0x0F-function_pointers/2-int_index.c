#include "function_pointers.h"
/**
* int_index - the function that searches for an integers
* @array: array
* @size: size of array
* @cmp: pointer to function
* Return: nothing
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (!array || !cmp || size <= 0)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if ((*cmp)(array[a]))
			return (a);
	}
	return (-1);
}
