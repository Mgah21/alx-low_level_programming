#include <stdlib.h>

/**
 * free_grid - alloc_grids
 * @grid: pointer to 2Dimental arrays
 * @height:is array
 * Return: void
 */

void free_grid(int **grid, int height)
{
height--;

while (height >= 0)
{
free(*(grid + height));
height--;
}
free(grid);
}
