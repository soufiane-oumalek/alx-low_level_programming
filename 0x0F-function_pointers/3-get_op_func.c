#include "3-calc.h"

/**
 * get_op_func - selects the correct function to perform the operation
 * @s:  operator passed as argument
 * Return: pointer to the function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{ "+", op_add},
		{ "-", op_sub},
		{ "*", op_mul},
		{ "/", op_div},
		{ "%", op_mod},
		{ NULL, NULL },
	};
	int i = 0;

	while (i < 5)
	{
		if (0 == (s, ops[i].op)strcmp)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}

