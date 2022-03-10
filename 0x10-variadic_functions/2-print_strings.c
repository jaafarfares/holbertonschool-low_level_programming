#include "variadic_functions.h"
/**
* print_strings - prints strings, followed by a new line.
* @separator: ...
* @n: ....
* Return: Nothing
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int a;
	char *pointer;


	va_start(ptr, n);
	for (a = 0; a < n; a++)
	{
		pointer = va_arg(ptr, char*);
		if (!pointer)
			printf("(nil)");
		else
			printf("%s", pointer);
		if (separator && a != n - 1)
			printf("%s", separator);
	}
	va_end(ptr);
	printf("\n");
}
