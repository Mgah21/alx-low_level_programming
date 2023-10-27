#include "main.h"

/**
 * flip_bits -The number countet
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int a, con = 0;
unsigned long int cur;
unsigned long int ex = n ^ m;

for (a = 63; a >= 0; a--)
{
cur = ex >> a;
if (cur & 1)
	con++;
}

return (con);
}
