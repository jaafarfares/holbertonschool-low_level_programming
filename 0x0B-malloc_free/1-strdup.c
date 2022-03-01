#include "main.h"
#include <stdlib.h>
/**
* _strdup - duplicates string
* @str: string to be duplicated
* Return: array
*/

char *_strdup(char *str)
{
	int i, n;
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
		p[i] = str[i];
	}

	return (p);
}
