#include "main.h"

/**
 * *cap_string - capitalize words
 * @str: pointer
 * Return: capitalzied string
*/

char *cap_string(char *str)
{
for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\t' ||
str[i] == '\n' || str[i] == ',' ||
str[i] == ';' || str[i] == '.' ||
str[i] == '!' || str[i] == '?' ||
str[i] == '"' || str[i] == '(' ||
str[i] == ')' || str[i] == '{' ||
str[i] == '}')
{
continue;
}


if (i == 0 || str[i - 1] == ' ' ||
str[i - 1] == '\t' || str[i - 1] ==
'\n' ||
str[i - 1] == ',' || str[i - 1] ==
';' || str[i - 1] == '.' || str[i - 1]
== '!' || str[i - 1] == '?' ||
str[i - 1] == '"' || str[i - 1] ==
'(' || str[i - 1] == ')' ||
str[i - 1] == '{' || str[i - 1] == '}')
{
str[i] = toupper(str[i]);
}
}

return (str);
}
