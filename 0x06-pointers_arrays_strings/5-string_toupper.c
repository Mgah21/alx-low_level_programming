#include "main.h"

/**
 * *string_toupper - capitalize a string
 * @str: pointer
 * Return: capitalzied string
 */

char *string_toupper(char *str)
{
int o;

for (o = 0; str[o] != '\0'; o++)
{
if (str[o] <= 'z' && str[o] >= 'a')
str[o] -= 32;
}
return (str);
}
