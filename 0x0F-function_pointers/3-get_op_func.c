#include "calc.h"

/**
 * get_op_func - Selects the operation
 * @s: pointer to operator
 *
 * Description: This function selects an operator to be used
 * Return: interger
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
}
