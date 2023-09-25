#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints summetions
 * @a: a pointer
 * @size: size
 */
void print_diagsums(int *a, int size)
{
int u, s1 = 0, s2 = 0;

for (u = 0; u < size; u++)
{
s1 += *(a + (size * u + u));
s2 += *(a + (size * u + size - 1 - u));
}
printf("%d, ", s1);
printf("%d\n", s2);
}
