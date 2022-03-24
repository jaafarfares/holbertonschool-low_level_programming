#include <stdio.h>
#include "main.h"

int get_endianness(void)
{
	int a = 1;
	char *b;

	b = (char *)&a;
	if (*b)
		printf("Little Endian\n");
	else
		printf("Big Endian\n");
	return(0);
}
