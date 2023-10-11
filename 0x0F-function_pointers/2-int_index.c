#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: array of elemnt
 * @size: number of element in the array
 * @cmp: is a pointer to the function to be used to compare value
 * Return: index first element cmp function does not return 0
 * If no element matches, return -1
 * If size <= 0, return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int u;

if (array && cmp)
{
for (u = 0; u < size; u++)
{
if (cmp(array[u]) != 0)
{
return (u);
}
}
}
return (-1);
}
