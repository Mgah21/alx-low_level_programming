#include "main.h"

/**
 * malloc_checked - allocation memory usings malloc
 * @b: bytes allocation
 * Return: pointers
 */
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
