#include "main.h"

/**
 * get_bit -The value return number
 * @n: number
 * @index: number
 * Return: sucess
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bv;

if (index > 63)
return (-1);

bv = (n >> index) & 1;

return (bv);
}
