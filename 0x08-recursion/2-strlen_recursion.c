#include "main.h"

/**
 * _strlen_recursion - returns the lengths  of a strings
 * @s: pointer the string
 * Return: int num
 */

int _strlen_recursion(char *s)
{
int z = 0;

if (*s > '\0')
{
z += _strlen_recursion(s + 1) + 1;
}

return (z);
}
