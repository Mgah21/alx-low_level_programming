#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two intger numbers
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
int x, v = 1;

if (argc != 3)
{
printf("Error\n");
return (1);
}
for (x = 1; x < argc; x++)
{
v *= atoi(argv[x]);
}
printf("%d\n", v);
return (0);
}
