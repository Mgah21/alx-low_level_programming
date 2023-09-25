#include "main.h"

/**
 * _strchr - finds the first occurrence of a character in a string
 * @s: pointer to the string
 * @c: the character to find
 * Return: *S
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
{
return (s);
}
s++;
}
if (*s == c)
{
return (s);
}
return (0);
}
