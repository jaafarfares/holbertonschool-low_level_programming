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
	int a = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[a + i] = src[i];
	dest[a + i] = '\0';

	return (dest);
}
