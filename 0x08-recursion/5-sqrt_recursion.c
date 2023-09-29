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
else
{
int start = 1;
int end = n;
while (start <= end)
{
int mid = (start + end) / 2;
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
}
return (-1);
}
}
