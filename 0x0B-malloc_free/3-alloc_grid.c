#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - print out a grid of integers
 * @width: width of the grids
 * @height: heights of the grids
 *
 * Return: pointer..
 */
int **alloc_grid(int width, int height)
{
int **s, g, f;

if (width <= 0 || height <= 0)
{
return (NULL);
}

s = malloc(sizeof(int *) * height);
if (s == NULL)
{
return (NULL);
}

for (g = 0; g < height; g++)
{
s[g] = malloc(sizeof(int) * width);

if (s[g] == NULL)
{
for (; g >= 0; g--)
{
free(s[g]);
}
free(s);
return (NULL);
}

for (f = 0; f <= width; f++)
{
s[g][f] = 0;
}
}
return (s);

}
