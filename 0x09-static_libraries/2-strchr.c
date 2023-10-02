#include "main.h"

/**
 * _strchr - prints founder c
 * @s: pointers to chars
 * @c: char params to found
 * Return: *S
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{

if (s[i] == c)
	{
return (s + i);
}
}
return (0);
}
