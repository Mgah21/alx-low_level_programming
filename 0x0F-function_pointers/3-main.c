#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - main file
 * @argc: number of line an arguments
 * @argv: array of an element
 * Return: 0
 */

int main(int argc, char *argv[])
{
int q;

if (argc != 4)
{
printf("Error\n");
exit(98);
}

q = (*get_op_func(argv[2]))(atoi(argv[1]), atoi(argv[3]));
printf("%d\n", q);

return (0);
}
