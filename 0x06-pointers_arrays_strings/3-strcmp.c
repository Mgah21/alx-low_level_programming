#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 0 if matching, and ns1 - ns2 if not matching
 */

int _strcmp(char *s1, char *s2)
{
while (*s1 && *s2 && *s1 == *s2)
{
s1++;
s2++;
}

return (*s1 - *s2);
}
