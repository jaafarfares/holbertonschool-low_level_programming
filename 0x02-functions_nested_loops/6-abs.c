#include "main.h"

/**
* _abs - Computes the absolute value of an integer.
* @n: The integer to be computed.
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately. 
*/
int _abs(int n)
{
	if (n >= 0)
	return (n);
	else
	return (-n);
}
