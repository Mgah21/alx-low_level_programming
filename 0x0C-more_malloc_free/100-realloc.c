#include "main.h"

/**
 * _realloc -  reallocation the memory block using malloc and free
 * @ptr: pointers
 * @old_size: old size
 * @new_size: modren size
 * Return: pointers
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *cl, *re;
unsigned int H;

if (ptr != NULL)
cl = ptr;
else
{
return (malloc(new_size));
}
if (new_size == old_size)
return (ptr);
if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (0);
}
re = malloc(new_size);
if (re == NULL)
return (0);
for (H = 0; H < (old_size || H < new_size); H++)
{
*(re + H) = cl[H];
}
free(ptr);
return (re);
}
