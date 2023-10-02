#include <stdio.h>

/**
 * main - prints all arguments it is the  receives
 * @argc: n args
 * @argv: arr args
 * Return: 0
 */
int main(int argc, char *argv[])
{
int x;

for (x = 0; x < argc; x++)
printf("%s\n", argv[x]);
return (0);
}
