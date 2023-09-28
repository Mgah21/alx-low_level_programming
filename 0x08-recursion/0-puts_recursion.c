#include "main.h"

/**
 * _puts_recursion - prints as strisng, followed by a new lines
 * @s: pointers to the strings
 * Return: void
 */


void _puts_recursion(char *s)
{

if (*s == '\0')
{
_putchar('\n');
}
else
{
_putchar(*s);
_puts_recursion(s + 1);
}

}
