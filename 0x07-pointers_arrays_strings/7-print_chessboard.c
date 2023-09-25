#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
int u, v;

for (u = 0; u < 8; u++)
{
for (v = 0; v < 8; v++)
{
_putchar(*(*(u + a) + v));
}
_putchar('\n');
}
}
