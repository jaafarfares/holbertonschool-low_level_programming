#include "main.h"
#include <stdio.h>
#include <string.h>
/**
* rev_string - check the code
*@s:i
*
* Return: Always 0.
*/
void rev_string(char *s)
{
	int i, a;
	char r;

	for (i = 0; s[i] != 0; i++)
	{
	}
	a = 0;
	--i;
	while (a < i)
	{
		r = s[i];
		s[i] = s[a];
		s[a] = r;
		a++;
		i--;
	}
}
