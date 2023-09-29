#include "main.h"

/**
 * _sqrt_recursion - search about natural square root
 * @r: integer
 * Return: int
 */

int _sqrt_recursion(int r)
{
return (square(r, 1));
}

/**
 * square - search about  square root
 * @r: int to find square root
 * @val: square root
 * Return: int
 */

int square(int r, int val)
{

if (val * val == r)
return (val);
else if (val * val < r)
return  (square(r, val + 1));
else
return (-1);
}
