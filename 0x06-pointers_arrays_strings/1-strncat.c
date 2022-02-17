#include "main.h"
#include <stdio.h>

/**
 * _strncat - check the code
 *@dest: pointer
 *@src: pointer
 *@n: integer
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, r;

	for (r = 0; src[n] != '\n'; r++)
	{
	}
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[r + i] = src[i];
	}
	dest[r + i] = '\0';

	return (dest);
}
