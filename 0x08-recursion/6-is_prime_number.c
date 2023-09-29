#include "main.h"
#include <stdio.h>
/**
 * is_prime_number - discover if n is a prime number
 * @n: integar
 * Return: 0 or 1
 */


int is_prime_number(int n)
{
return (check_prime(n, 2));
}

/**
 * check_prime - check all number < n if they can divide it
 * @n: int
 * @re: integear
 * Return: int
 */

int check_prime(int n, int re)
{

if (re >= n && n > 1)
return (1);
else if (n % re == 0 || n <= 1)
return (0);
else
return (check_prime(n, re + 1));
}
