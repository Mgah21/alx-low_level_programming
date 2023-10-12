#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - prints all numbers with a separator
 * @separator: separator numbers
 * @n: int, numbers of an undefine arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int u;

va_start(list, n);

for (u = 0; u < n; u++)
{
printf("%i", va_arg(list, int));
if (u != n - 1 && separator != NULL)
	printf("%s", separator);
}
va_end(list);

putchar('\n');
}
