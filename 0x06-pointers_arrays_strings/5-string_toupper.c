#include "main.h"

/**
 * *string_toupper - capitalize a string
 * @str: pointer
 * Return: capitalzied string
 */

char *string_toupper(char *str)
{
for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z'
{
str[i] -= 32;
}
}
return (str);
}
