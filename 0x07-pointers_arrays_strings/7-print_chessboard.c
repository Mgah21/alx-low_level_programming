#include "main.h"

/**
 * print_chessboard - prints a chessboard
 * @a: array
 */

void print_chessboard(char (*a)[8])
{
for (int i = 0; i < 8; i++)
{
for (int j = 0; j < 8; j++)
{
_putchar(*(*(i + a) + j));
}
_putchar('\n');
}
}
