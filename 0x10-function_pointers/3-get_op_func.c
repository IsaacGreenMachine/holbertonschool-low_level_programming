#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - returns function used for passed operation
 * @s: string pointing to operation
 *
 * Return: pointer to function to use
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
int i = 0;
while (*s != *ops[i].op && i < 6)
{
i++;
}
return (ops[i].f);
}
