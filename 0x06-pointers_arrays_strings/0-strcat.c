#include "main.h"
#include <stdio.h>

/**
* _strcat - check the code
*@dest: pointer
*@src: pointer
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
	int n, i;

	n = 0;
	while (dest[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[n + i] = src[i];
	}
	dest[n + i] = '\0';
	return (dest);
}
