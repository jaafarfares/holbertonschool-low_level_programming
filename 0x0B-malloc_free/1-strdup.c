#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - check the code.
 *@str: pointer.
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	int n, i;
	char *p;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n] != '\0'; n++)
		;
		
		p = (char *)malloc(sizeof(char) * n + 1);
		
		if (p == NULL)
			return (NULL);
		
		for (i = 0; i < n; i++)
		{
			p[n] = str[n];
		}
		return (p);
}
