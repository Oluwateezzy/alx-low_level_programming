#include "calc.h"
/**
 * get_op_func - get operation
 * @s: operator
 * Return: integer
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
	
	while (ops[i])
	{
		if (s == ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
