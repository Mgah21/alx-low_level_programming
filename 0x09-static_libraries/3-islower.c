#include "main.h"

/**
 * _islower - check the code for islower character
 *
 * @c:  is a parameter for function
 *
 * Return: Always 0.
 */

int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
