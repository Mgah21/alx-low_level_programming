#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints all strings with  separators
 * @separator: separator strings
 * @n: int, number of undefined arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list list;
unsigned int k;
char *d;
va_start(list, n);

for (k = 0; k < n; k++)
{
d = va_arg(list, char*);
if (d != NULL)
	printf("%s", d);
else
	printf("(nil)");

if (k != n - 1 && separator != NULL)
	printf("%s", separator);
}
va_end(list);

putchar('\n');
}
