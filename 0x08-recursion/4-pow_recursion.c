#include "main.h"

/**
 * _pow_recursion - find a string for any of a sets of bytes.
 * @a: bases
 * @b: exposants
 * Return: Pointer to the byte in `s` that matches one of the bytes in `accept`
 * or NULL if no such byte is found.
 */

int _pow_recursion(int a, int b)
{

if (b < 0)
return (-1);
else if (b == 1)
return (a);
else if (b == 0)
return (1);

return (a * _pow_recursion(a, b - 1));

}
