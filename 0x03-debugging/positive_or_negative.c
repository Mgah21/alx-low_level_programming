#include "main.h"
/**
* main - Test function for positive or negative
* Return: 0
*/

/*int main(void)*/
void positive_or_negative(void)
{
int i;
positive_or_negative(i);
if (i > 0)
printf("%d is positive\n", i);
else if (i < 0)
printf("%d is negative\n", i);
else
printf("%d is zero\n", i);
return (0);
}
