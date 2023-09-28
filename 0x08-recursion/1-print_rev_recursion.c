#include "main.h"

/**
 * _print_rev_recursion - prints string at reverse
 * @s: pointer string
 * Return: void
 */

void _print_rev_recursion(char *s)
{
if (len(s) == 0)
{
return;
}
_print_rev_recursion(s + 1);
print(s[0], end = ' ');
}
