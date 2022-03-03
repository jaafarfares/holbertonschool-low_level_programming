#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - check the code
 *@*s1: first string
 *@s2: second string
 *@n: the numbers from s2
 * Return: ptr.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a;
	char *ptr;

	if (s1 == NULL)
		s1 = NULL;
	if (s2 == NULL)
		s2 = NULL;
	if (n > strlen(s2))
		n = strlen(s2);
	ptr = malloc(sizeof(char) * (strlen(s1) + n + 1));
	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < (strlen(s1) + n); a++)
	{
		if (a < strlen(s1))
			ptr[a] = s1[a];
		else
			ptr[a] = s2[a - strlen(s1)];
	}
	ptr[a] = '\0';
	return (ptr);
}
