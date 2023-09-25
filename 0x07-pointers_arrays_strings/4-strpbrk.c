#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - bytes
 * @s: pointer to char
 * @accept: pointer to characters
 * Return: NULL
 */

char *_strpbrk(char *s, char *accept)
{
int u;

while (*s)
{
for (u = 0; accept[u]; u++)
{
if (*s == accept[u])
{
return (s);
}
}
s++;
}
return (NULL);
}
