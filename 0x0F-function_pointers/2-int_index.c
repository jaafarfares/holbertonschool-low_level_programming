#include "function_pointers.h"
/**
 *int_index - the function that serches for integers
 *@size: ..
 *@cmp: ...
 *Return : ...
 * */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
