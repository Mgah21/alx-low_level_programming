#include "main.h"

/**
 * **concat_strings - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to destination string
 */

char *concat_strings(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
;
for (j = 0; src[j] != '\0'; j++)
{
dest[i + j] = src[j];
}
dest[i + j] = '\0';
return (dest);
}
