#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  sum all argument
 * @n: int, number of undefined arguments
 *
 * Return: summition of argments
 * On error, 0 is return
 */

int sum_them_all(const unsigned int n, ...)
{
va_list list;
unsigned int a, s = 0;

va_start(list, n);
if (n != 0)
for (a = 0; a < n; s += va_arg(list, unsigned int), a++)
;
va_end(list);

return (s);
}
