#include "main.h"

/**
 * _memset - Fills memory with a specific value
 * @s: Pointer to memory
 * @b: Value to fill memory with
 * @n: Number of bytes to fill
 * Return: Pointer to memory
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int u;

for (u = 0; u < n; u++)
{
s[u] = b;
}
return (s);
}
