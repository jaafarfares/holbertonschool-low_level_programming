#include "main.h"

/**
* _strchr - check the code
*@s: pointer
*@c: char
* Return: Always 0.
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != c; i++)
	{
	}
		if (s[i] == c)
		{
			return (s + i);
		}
	else
	{
		return (0);
	}
}
