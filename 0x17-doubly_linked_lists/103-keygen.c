#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * main - generate 
 * @argc: number arguments
 * @argv: arguments pass
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
unsigned int u, b;
size_t len, add;
char *l = "A-CHRDw87lNS0E9B2TibgpnMVys5XzvtOGJcYLU+4mjW6fxqZeF3Qa1rPhdKIouk";
char p[7] = "      ";

if (argc != 2)
{
printf("Correct usage: ./keygen5 username\n");
return (1);
}
len = strlen(argv[1]);
p[0] = l[(len ^ 59) & 63];
for (u = 0, add = 0; u < len; u++)
add += argv[1][u];
p[1] = l[(add ^ 79) & 63];
for (u = 0, b = 1; u < len; u++)
b *= argv[1][u];
p[2] = l[(b ^ 85) & 63];
for (b = argv[1][0], u = 0; u < len; u++)
if ((char)b <= argv[1][u])
b = argv[1][u];
srand(b ^ 14);
p[3] = l[rand() & 63];
for (b = 0, u = 0; u < len; u++)
b += argv[1][u] * argv[1][u];
p[4] = l[(b ^ 239) & 63];
for (b = 0, u = 0; (char)u < argv[1][0]; u++)
b = rand();
p[5] = l[(b ^ 229) & 63];
printf("%s\n", p);
return (0);
}
