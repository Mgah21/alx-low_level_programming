#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - get  operation
 * @s: operators
 * Return: No
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

while (ops[g].op)
{
if (strcmp(s, ops[g].op) == 0)
{
return (ops[g].f);
}
g++;
}
printf("Error\n");
exit(99);
}
