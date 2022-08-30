#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
/**
 * binary_search - ....
 * @array: ...
 * @size: ...
 * @value: .....
 * Return: ....
 */
int binary_search(int *array, size_t size, int value)
{
    size_t mid, i, left = 0, right = size -1;


    if (array == NULL)
	{
		return (-1);
    }
    while(left <= right)
    {
        printf("Searching in array: ");

		for (i = left; i < right ; i++)
		{
			printf("%i, ", array[i]);
		}

		printf("%i\n", array[right]);

        mid = (left + right) / 2;   

        if (array[mid] == value)
            return mid;

        else if (value < array[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return (-1);
}
