#include "main.h"
#include <stdio.h>
#include <math.h>

int _sqrt(int n, int i);

/**
* _sqrt_recursion - check the code
*@n: the integer that hold the factorial number
* Return: Always 0.
*/
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
* _sqrt - check the code
*@n: the integer
*@i: integer
* Return: Always 0.
*/
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (n < sqrt)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
