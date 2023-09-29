#include "main.h"

/**
 * factorial - search about  factorial
 * @u: integer
 * Return: int
 */

int factorial(int u)
{

if (u < 0)
{
return (-1);
}
else if (u == 0)
{
return (1);
}

return (u * factorial(u - 1));

}
