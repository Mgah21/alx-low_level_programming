include "main.h"

/**
* reverse_array - reverse an int array
* @a: pointer to the array
* @n: length of the array
* Return: void
*/

void reverse_array(int *a, int n)
{
for (int i = 0; i < n / 2; i++)
{
int temp = a[i];
a[i] = a[n - i - 1];
a[n - i - 1] = temp;
}
}
