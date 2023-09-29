#include "main.h"

/**
 * _sqrt_recursion - find natural square root
 * @n: int
 * Return: int
 */

int _sqrt_recursion(int n)
{
if (n == 0 || n == 1)
{
return (n);
}

int start = 1;
int end = n;
int mid = (start + end) / 2;

while (start < end)
{
if (mid * mid == n)
{
return (mid);
}
else if (mid * mid < n)
{
start = mid + 1;
}
else
{
end = mid - 1;
}

mid = (start + end) / 2;
}

return (-1);
}
