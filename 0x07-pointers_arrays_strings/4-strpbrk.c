#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - check the code
 *@s: string to be scanned.
 *@accept: string containing chratchters to match.
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int a = 0, b;

	while (s[a])
	{
		b = 0;
		a++;
		while (accept[b])
		{
			b++;
			if (s[a] == accept[b])
			{
				s += a;
				return (s);
			}
		}
	}
	return ('\0');
}
