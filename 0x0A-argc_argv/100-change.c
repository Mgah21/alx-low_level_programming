#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - prints the minimum numbers of coins
 * to making change for an amounts of money
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
int v, c;

c = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
v = atoi(argv[1]);
if (v < 0)
{
printf("%d\n", 0);
return (0);
}
if (v % 25 >= 0)
{
c += v / 25;
v = v % 25;
}
if (v % 10 >= 0)
{
c += v / 10;
v = v % 10;
}
if (v % 5 >= 0)
{
c += v / 5;
v = v % 5;
}
if (v % 2 >= 0)
{
c += v / 2;
v = v % 2;
}
if (v % 1 >= 0)
{
c += v / 1;
}
printf("%d\n", c);
return (0);
}
