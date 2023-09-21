#include "main.h"

/**
* reverse_array - reverse an int array
* @a: pointer to the array
* @n: length of the array
* Return: void
*/

void reverse_array(int *a, int n)
{
int u = 0, h;

for (h = n / 2; h > 0; h--, u++)
{
a[n - u - 1] += a[u];
a[u] = a[n - u - 1] - a[u];
a[n - u - 1] = a[n - u - 1] - a[u];
}
}
