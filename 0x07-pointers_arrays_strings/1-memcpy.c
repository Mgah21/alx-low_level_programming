#include "main.h"

/**
 * copy_string - copy a string from one array to another
 * @dest: pointer to the destination array
 * @src: pointer to the source array
 * @n: the number of characters to copy
 * Return: a pointer to the destination array
 */

char *copy_string(char *dest, char *src, unsigned int n)
{
unsigned int u;

for (u = 0; u < n; u++)
{
dest[u] = src[u];
}

return (dest);
}
