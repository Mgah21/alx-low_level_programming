#include "main.h"

/**
 * leet - transform to leet
 * @s: char array string type
 * Return: s transformed
 */

char *leet(char *s)
{
int x, y;
char s1[] = "aeotl";
char S1[] = "AEOTL";
char s2[] = "43071";

for (x = 0; s[x] != '\0'; x++)
{
for (y = 0; y < 5; y++)
{
if (s[x] == s1[y] || s[x] == S1[y])
{
s[x] = s2[y];
break;
}
}
}
return (s);
}
