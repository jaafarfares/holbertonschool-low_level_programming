#include "function_pointers.h"
/**
 * int_index - function that serches for integers
 *@array: ..
 *@size: ..
 *@cmp: ...
 *Return : index of element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
	}
	for (a = 0; a < size; a++)
	{
		if ((*cmp)(array[a]))
			return (a);
	}
	return (-1);
}
