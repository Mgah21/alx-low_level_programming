#include <stdlib.h>

/**
 * _strdup - work copy
 * @str: pointers to strings
 * Return: pointers
 */

char *_strdup(char *str)
{
char *s;
int x = 0, y;

if (!str)
return (NULL);

while (*(str + x))
x++;
x++;
s = malloc(sizeof(char) * x);

if (s == NULL)
{
return (NULL);
}

for (y = 0; y <= x; y++)
{
s[y] = str[y];
}
return (s);
}
