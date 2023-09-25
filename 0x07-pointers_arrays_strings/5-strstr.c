#include "main.h"
#include <stddef.h>

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: the string to search
 * @needle: the substring to find
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
if (*haystack == *needle)
{
char *haystack_ptr = haystack;
char *needle_ptr = needle;
while (*haystack_ptr == *needle_ptr && *needle_ptr != '\0')
{
haystack_ptr++;
needle_ptr++;
}

if (*needle_ptr == '\0')
{
return (haystack);
}
}

haystack++;
}

return (NULL);
}
