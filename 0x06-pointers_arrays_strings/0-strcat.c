#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: pointer to destination string
 * @src: pointer to source string
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
int a = -1, q;
for (q = 0; dest[q] != '\0'; q++)
;

do {
a++;
dest[q] = src[a];
q++;
} while (src[a] != '\0');

return (dest);
}











