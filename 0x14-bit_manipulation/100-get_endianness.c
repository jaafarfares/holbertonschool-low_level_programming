#include <stdio.h>
#include "main.h"

int get_endianness(void)
{
	int x = 1;
	char *y;
	
	if (x != 0)
	{
		printf("Little Endian\n");
	}
	y = (char*)&x;
	printf("%c\n",*y+48);
	return (0);
}
