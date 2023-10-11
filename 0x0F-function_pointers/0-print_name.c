#include "function_pointers.h"

/**
 * print_name - print the   name
 * @name: name's main name
 * @f: void function
 */

void print_name(char *name, void (*f)(char *))
{
if (name && f)
{
f(name);
}
}
