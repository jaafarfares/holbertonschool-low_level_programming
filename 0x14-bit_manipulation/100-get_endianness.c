#include <stdio.h>
#include "main.h"

int get_endianness(void)
{
	int x = 1;

	if (x != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
