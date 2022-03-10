#include "variadic_functions.h"
/**
* print_numbers - the function
*@separator: ..
*@n:..
*Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int a;

	va_start(ptr, n);
	for (a = 0; a < n; a++)
	{
		if (separator && a != n - 1)
			printf("%d%s", va_arg(ptr, const unsigned int), separator);
		else
			printf("%d", va_arg(ptr, const unsigned int));
	}
	va_end(ptr);
	printf("\n");
}
