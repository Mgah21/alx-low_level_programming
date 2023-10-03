#include "main.h"

/**
 * _strlen - lengths of a strings
 * @s: input characters
 * Return: lengths of a strings
 */

int _strlen(char *s)
{
int x = 0;

while (*s != '\0')
{
s++;
x++;
}
return (x);
}

/**
 * str_concat - Concat 2 strings.
 * @s1: strings
 * @s2: strings
 * Return: character
 */

char *str_concat(char *s1, char *s2)
{
unsigned int y, z;
char *conc, *tmp;

if (!s1)
s1 = "";
else
y = _strlen(s1);

if (!s2)
s2 = "";
else
z = _strlen(s2);

conc = malloc(y + z + 1);
if (!conc)
return (0);

tmp = conc;
while (*s1)
*tmp++ = *s1++;

while ((*tmp++ = *s2++))
;

return (conc);
}
