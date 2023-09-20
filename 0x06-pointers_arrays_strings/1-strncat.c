#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: maximum number of bytes to copy from src
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
int d, i;

for (d = 0; dest[d] != '\0'; d++)
;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[d + i] = src[i];


dest[d + i] = '\0';

return (dest);
}

