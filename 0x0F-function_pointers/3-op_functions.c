#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition
 * @a: sumnd one
 * @b: sumnd two
 * Return: rsult
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction
 * @a: minuend
 * @b: sustrnd
 * Return: result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplication
 * @a: multple one
 * @b: multple two
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: divisr
 * @b: dividndo
 * Return: reult
 */

int op_div(int a, int b)
{
	if (b)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod - modulo
 * @a: vaper one
 * @b: vaper two
 * Return: result
 */

int op_mod(int a, int b)
{
	if (b)
	{
		return (a % b);
	}
	printf("Error\n");
exit(100);
}
