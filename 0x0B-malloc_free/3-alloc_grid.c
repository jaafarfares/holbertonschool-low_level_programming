#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
* *str_concat - concatenates two strings
* @s1: string to concatenate
* @s2: other string to concatenate
*
* Return: pointer to the new string created (Success), or NULL (Error)
*/
char *str_concat(char *s1, char *s2)
{
	char *s3;
	unsigned int a = 0, n = 0, r = 0, i = 0;

	while (s1 && s1[r])
		r++;
	while (s2 && s2[i])
		i++;

	s3 = malloc(sizeof(char) * (r + i + 1));
	if (s3 == NULL)
		return (NULL);

	a = 0;
	n = 0;

	if (s1)
	{
		while (a < r)
		{
			s3[a] = s1[a];
			a++;
		}
	}

	if (s2)
	{
		while (a < (r + i))
		{
			s3[a] = s2[n];
			a++;
			n++;
		}
	}
	s3[a] = '\0';

	return (s3);
}
