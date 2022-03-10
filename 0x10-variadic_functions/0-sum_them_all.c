#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function
 *@n: ...
 *
 *
 *Return: nothing.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list nptr;
	unsigned int a;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(nptr, n);
	for (a = 0; a < n; a++)
	{
		sum += va_arg(nptr, int);
	}
		return (sum);
	va_end(nptr);
}
