#include "main.h"

/**
 *create_array - array for prints a strings
 *@size: numbers elements array
 *@c: character
 *Return: pointers
 */

char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int p;

if (size == 0)
{
return (NULL);
}

/*Define values with malloc*/
buffer = (char *) malloc(size * sizeof(c));

if (buffer == 0)
{
return (NULL);
}

else
{
p = 0;
while (p < size)
/*While for array*/
{
*(buffer + p) = c;
p++;
}

return (buffer);
}

}
