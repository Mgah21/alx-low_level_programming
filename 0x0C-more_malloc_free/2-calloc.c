#include "main.h"

/**
 * _memset - copy character
 * @s: strings
 * @b: Enter input
 * @n: bytes
 * Return: strings
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int t;

for (t = 0; t < n; t++)
{
s[t] = b;
}
return (s);
}

/**
 * _calloc - allocation memory for  array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *r;

	if (nmemb == 0 || size == 0)
		return (NULL);
	r = malloc(nmemb * size);

	if (r == NULL)
		return (NULL);
	_memset(r, 0, (nmemb * size));
	return (r);
}
