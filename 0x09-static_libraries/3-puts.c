#include "main.h"

/**
 * _puts - prints strings
 * @str: input strings
 * Return: no return
 */

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
