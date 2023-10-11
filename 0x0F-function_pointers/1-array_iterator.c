#include <stdio.h>

/**
 * array_iterator - execution function
 * @array: array of elementss
 * @size: array's is asize
 * @action: pointer to a function
 * Return: No
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int k;

if (array && size && action)
{
for (k = 0; k < size; k++)
{
(*action)(array[k]);
}
}
}
