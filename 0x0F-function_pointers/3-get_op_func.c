#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 *get_op_func - the fonction
 *@s: char
 *Return: nothing
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add },
		{ "-", op_sub },
		{ "*", op_mul },
		{ "/", op_div },
		{ "%", op_mod },
		{ NULL, NULL }
	};
	int a = 0;

	while (ops[a].op)
	{
		if ((*(ops[a]).op == *s) && (*(s + 1) == '\0'))
			return (ops[a].f);
	a++;
	}

	return (0);
}
