#include "main.h"

/**
 * _memcpy - irontnoux2
 * @dest: pointer to char params
 * @src: pointer to char params
 * @n: size
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int u;

for (u = 0; u < n; u++)
{
dest[u] = src[u];
}

return (dest);
}
