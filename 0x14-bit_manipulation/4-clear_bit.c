#include "main.h"

/**
 * clear_bit -The number
 * @n: pointer
 * @index: index num
 *
 * Return: success
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = (~(1UL << index) & *n);
return (1);
}
