#include "3-calc.h"
/**
 * get_op_func -find the suitable function for the required operator
 * @s: operator given
 *
 * Return: pointer to the found function or NULL if not found
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

	i = 0;
	while (i < 5 && ops[i].op != s)
		i++;

	return (ops[i].f);
}
